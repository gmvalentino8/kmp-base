package domain.usecases

import domain.entities.ErrorEntity
import utils.Result
import utils.BackgroundDispatcher
import utils.MainDispatcher
import kotlinx.coroutines.*
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.collect
import kotlin.coroutines.CoroutineContext

abstract class UseCase<out Type, in Parameters> : CoroutineScope where Type : Any, Parameters : UseCase.Parameters {

    private val job = Job()

    override val coroutineContext: CoroutineContext
        get() = MainDispatcher + job

    abstract suspend fun execute(parameters: Parameters): Flow<Result<Type>>

    fun execute(parameters: Parameters, onSuccess: (Type) -> Unit, onError: (ErrorEntity) -> Unit) {
        launch {
            withContext(BackgroundDispatcher) {
                execute(parameters).collect {
                    when (it) {
                        is Result.Success -> onSuccess(it.data)
                        is Result.Error -> onError(it.error)
                    }
                }
            }
        }
    }

    abstract class Parameters

    object None
}

