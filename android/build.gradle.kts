import org.jetbrains.kotlin.gradle.tasks.KotlinCompile

val kotlin_version: String by extra
val gradle_android_version: String by extra
val ktor_version: String by extra
val coroutines_version: String by extra
val serialization_version: String by extra
val kodein_version: String by extra

plugins {
    id("com.android.application")
    id("kotlin-android")
    id("kotlin-android-extensions")
}

android {
    compileSdkVersion(29)

    defaultConfig {
        applicationId = "com.kmp"
        minSdkVersion(16)
        targetSdkVersion(29)
        versionCode = 1
        versionName = "1.0"
        testInstrumentationRunner = "android.support.test.runner.AndroidJUnitRunner"
    }

    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
            proguardFiles(getDefaultProguardFile("proguard-android.txt"), "proguard-rules.pro")
        }
    }

    dexOptions {
        val travisBuild = System.getenv("TRAVIS") == "true"
        val preDexEnabled = System.getProperty("pre-dex", "true") == "true"
        preDexLibraries = preDexEnabled && !travisBuild
    }

    packagingOptions {
        exclude("META-INF/*.kotlin_module")
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }

    tasks.withType<KotlinCompile> {
        kotlinOptions {
            jvmTarget = "1.8"
        }
    }
}


dependencies {
    implementation(project(":common"))
    implementation(fileTree(mapOf("dir" to "libs", "include" to listOf("*.jar"))))
    implementation(("org.jetbrains.kotlin:kotlin-stdlib-jdk7:$kotlin_version"))
    implementation( "androidx.appcompat:appcompat:1.1.0")
    implementation( "androidx.core:core-ktx:1.1.0")
    implementation( "androidx.constraintlayout:constraintlayout:1.1.3")
    implementation( "org.jetbrains.kotlinx:kotlinx-coroutines-android:$coroutines_version")
    implementation( "org.kodein.di:kodein-di-generic-jvm:$kodein_version")
    implementation( "org.kodein.di:kodein-di-framework-android-x:$kodein_version")

    testImplementation("junit:junit:4.12")
    androidTestImplementation("com.android.support.test:runner:1.0.2")
    androidTestImplementation("com.android.support.test.espresso:espresso-core:3.0.2")
}
