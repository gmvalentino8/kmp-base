package utils

import com.kmp.TestDatabase
import com.squareup.sqldelight.db.SqlDriver
import com.squareup.sqldelight.drivers.ios.NativeSqliteDriver

actual fun getDriver(): SqlDriver = NativeSqliteDriver(TestDatabase.Schema, "test.db")
