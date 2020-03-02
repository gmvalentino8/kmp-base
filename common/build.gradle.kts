import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

val kotlin_version: String by extra
val ktor_version: String by extra
val coroutines_version: String by extra
val serialization_version: String by extra
val kodein_version: String by extra
val klock_version: String by extra
val sqldelight_version: String by extra

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    id("kotlinx-serialization")
    id("com.squareup.sqldelight")
    id("org.jetbrains.kotlin.native.cocoapods")
}

version = "0.0.1"

android {
    compileSdkVersion(29)
    buildToolsVersion = "29.0.2"
    defaultConfig {
        minSdkVersion(16)
        targetSdkVersion(29)
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
    tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile> {
        kotlinOptions {
            jvmTarget = "1.8"
        }
    }
}

kotlin {

    ios()
    android()

    sourceSets["commonMain"].dependencies {
        implementation("org.jetbrains.kotlin:kotlin-stdlib")
        implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core-common:$coroutines_version")
        implementation("org.jetbrains.kotlinx:kotlinx-serialization-runtime-common:$serialization_version")
        implementation("io.ktor:ktor-client-core:$ktor_version")
        implementation("io.ktor:ktor-client-serialization:$ktor_version")
        implementation("org.kodein.di:kodein-di-core:$kodein_version")
        implementation("org.kodein.di:kodein-di-erased:$kodein_version")
        implementation("com.soywiz.korlibs.klock:klock:$klock_version")
    }

    sourceSets["androidMain"].dependencies {
        implementation("org.jetbrains.kotlin:kotlin-stdlib")
        implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:$coroutines_version")
        implementation("io.ktor:ktor-client-android:$ktor_version")
        implementation("io.ktor:ktor-client-json-jvm:$ktor_version")
        implementation("io.ktor:ktor-client-serialization-jvm:$ktor_version")
        implementation("org.jetbrains.kotlinx:kotlinx-serialization-runtime:$serialization_version")
        implementation("com.squareup.sqldelight:android-driver:$sqldelight_version")
    }

    sourceSets["iosMain"].dependencies {
        implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core-native:$coroutines_version")
        implementation("org.jetbrains.kotlinx:kotlinx-serialization-runtime-native:$serialization_version")
        implementation("io.ktor:ktor-client-ios:$ktor_version")
        implementation("io.ktor:ktor-client-serialization-native:$ktor_version")
        implementation("com.squareup.sqldelight:ios-driver:$sqldelight_version")
    }

    cocoapods {
        // Configure fields required by CocoaPods.
        summary = "Common Code"
        homepage = "https://github.com/gmvalentino8/kmp-common-base"
    }
}

sqldelight {
    database("TestDatabase") {
        packageName = "com.kmp"
        schemaOutputDirectory = file("build/dbs")
    }
}
