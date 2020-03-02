package domain.usecases

import di.testKodein
import domain.entities.ErrorEntity
import domain.entities.TestEntity
import domain.repositories.TestRepository
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import org.kodein.di.erased.instance
import utils.Result

class TestUseCase : UseCase<List<TestEntity>, TestUseCase.Parameters>() {

    private val testRepository: TestRepository by testKodein.instance()

    override suspend fun execute(parameters: Parameters): Flow<Result<List<TestEntity>>> {
        return flow {
            runCatching {
                testRepository.getUsers(parameters.update)
            }.fold(
                onSuccess = {
                    emit(Result.Success(it))
                },
                onFailure = {
                    emit(Result.Error(ErrorEntity.Unknown(it)))
                }
            )
        }
    }

    data class Parameters(
        val test: String,
        val update: Boolean = false
    ) : UseCase.Parameters()
}
