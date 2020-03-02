package utils

import com.kmp.TestDatabase
import com.squareup.sqldelight.android.AndroidSqliteDriver
import com.squareup.sqldelight.db.SqlDriver

actual fun getDriver(): SqlDriver = AndroidSqliteDriver(TestDatabase.Schema, appContext, "text.db")
