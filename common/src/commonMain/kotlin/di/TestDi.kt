package di

import com.kmp.TestDatabase
import com.squareup.sqldelight.EnumColumnAdapter
import com.squareup.sqldelight.db.SqlDriver
import data.local.TestDb
import data.local.TestStore
import data.remote.TestApi
import data.repositories.TestDataRepository
import domain.repositories.TestRepository
import domain.usecases.TestUseCase
import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import org.kodein.di.Kodein
import org.kodein.di.erased.bind
import org.kodein.di.erased.instance
import org.kodein.di.erased.provider
import org.kodein.di.erased.singleton
import utils.getDriver

val testKodein = Kodein {
    bind<SqlDriver>() with provider { getDriver() }
    bind<HttpClient>() with provider {
        HttpClient {
            install(JsonFeature) {
                serializer = KotlinxSerializer()
            }
        }
    }
    bind<TestDatabase>() with provider { TestDatabase(instance(), TestDb.Adapter(genderAdapter = EnumColumnAdapter())) }
    bind<TestApi>() with provider { TestApi(instance()) }
    bind<TestRepository>() with provider { TestDataRepository(TestStore, instance(), instance()) }
    bind<TestUseCase>() with provider { TestUseCase() }
}

object TestDi {
    val testUseCase: TestUseCase by testKodein.instance()
}
