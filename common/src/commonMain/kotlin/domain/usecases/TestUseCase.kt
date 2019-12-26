package domain.usecases

import domain.entities.ErrorEntity
import com.kmp.common.Result
import domain.entities.TestEntity
import data.repositories.TestDataRepository

class TestUseCase(
    private val testRepository: TestDataRepository
) : UseCase<List<TestEntity>, TestUseCase.Parameters>() {

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
