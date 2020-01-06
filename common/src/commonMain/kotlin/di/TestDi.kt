package di

import data.remote.TestApi
import data.repositories.TestDataRepository
import domain.repositories.TestRepository
import domain.usecases.TestUseCase
import org.kodein.di.Kodein
import org.kodein.di.erased.bind
import org.kodein.di.erased.instance
import org.kodein.di.erased.provider

val testKodein = Kodein {
    bind<TestApi>() with provider { TestApi() }
    bind<TestRepository>() with provider { TestDataRepository(instance()) }
    bind<TestUseCase>() with provider { TestUseCase() }
}
