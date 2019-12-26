import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

val kotlin_version: String by extra
val ktor_version: String by extra
val coroutines_version: String by extra
val serialization_version: String by extra

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    id("kotlinx-serialization")
}

android {
    compileSdkVersion(29)
    buildToolsVersion = "29.0.2"
    defaultConfig {
        minSdkVersion(16)
        targetSdkVersion(29)
    }
}

kotlin {
    //select iOS target platform depending on the Xcode environment variables
    val iOSTarget: (String, KotlinNativeTarget.() -> Unit) -> KotlinNativeTarget =
        if (System.getenv("SDK_NAME")?.startsWith("iphoneos") == true)
            ::iosArm64
        else
            ::iosX64

    iOSTarget("ios") {
        binaries {
            framework {
                baseName = "common"
            }
        }
    }

    android()

    sourceSets["commonMain"].dependencies {
        implementation("org.jetbrains.kotlin:kotlin-stdlib")
        implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core-common:$coroutines_version")
        implementation("org.jetbrains.kotlinx:kotlinx-serialization-runtime-common:$serialization_version")
        implementation("io.ktor:ktor-client-core:$ktor_version")
        implementation("io.ktor:ktor-client-serialization:$ktor_version")
    }

    sourceSets["androidMain"].dependencies {
        implementation("org.jetbrains.kotlin:kotlin-stdlib")
        implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:$coroutines_version")
        implementation("io.ktor:ktor-client-android:$ktor_version")
        implementation("io.ktor:ktor-client-json-jvm:$ktor_version")
        implementation("io.ktor:ktor-client-serialization-jvm:$ktor_version")
        implementation("org.jetbrains.kotlinx:kotlinx-serialization-runtime:$serialization_version")
    }

    sourceSets["iosMain"].dependencies {
        implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core-native:$coroutines_version")
        implementation("org.jetbrains.kotlinx:kotlinx-serialization-runtime-native:$serialization_version")
        implementation("io.ktor:ktor-client-ios:$ktor_version")
        implementation("io.ktor:ktor-client-serialization-native:$ktor_version")
    }
}


val packForXcode by tasks.creating(Sync::class) {
    group = "build"

    //selecting the right configuration for the iOS framework depending on the Xcode environment variables
    val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
    val framework = kotlin.targets.getByName<KotlinNativeTarget>("ios").binaries.getFramework(mode)

    inputs.property("mode", mode)
    dependsOn(framework.linkTask)

    val targetDir = File(buildDir, "xcode-frameworks")
    from({ framework.outputDirectory })
    into(targetDir)

    doLast {
        val gradlew = File(targetDir, "gradlew")
        gradlew.writeText("#!/bin/bash\nexport 'JAVA_HOME=${System.getProperty("java.home")}'\ncd '${rootProject.rootDir}'\n./gradlew \$@\n")
        gradlew.setExecutable(true)
    }
}

tasks.getByName("build").dependsOn(packForXcode)
