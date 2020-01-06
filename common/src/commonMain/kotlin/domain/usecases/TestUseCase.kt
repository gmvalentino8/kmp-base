package domain.usecases

import domain.entities.ErrorEntity
import com.kmp.common.Result
import domain.entities.TestEntity
import di.testKodein
import domain.repositories.TestRepository
import org.kodein.di.erased.instance

class TestUseCase : UseCase<List<TestEntity>, TestUseCase.Parameters>() {

    private val testRepository: TestRepository by testKodein.instance()

    override suspend fun execute(parameters: Parameters): Result<List<TestEntity>> =
        runCatching {
            testRepository.getUsers()
        }.fold(
            onSuccess = {
                Result.Success(it)
            },
            onFailure = {
                Result.Error(ErrorEntity.Unknown(it))
            }
        )

    data class Parameters(
        val test: String
    ) : UseCase.Parameters()
}
