package domain.usecases

import com.kmp.common.Result
import com.kmp.common.utils.BackgroundDispatcher
import com.kmp.common.utils.MainDispatcher
import kotlinx.coroutines.*
import kotlin.coroutines.CoroutineContext

abstract class UseCase<out Type, in Parameters> : CoroutineScope where Type : Any, Parameters : UseCase.Parameters {

    private val job = Job()

    override val coroutineContext: CoroutineContext
        get() = MainDispatcher + job

    abstract suspend fun execute(parameters: Parameters): Result<Type>

    operator fun invoke(parameters: Parameters, completion: (Result<Type>) -> Unit) {
        launch {
            withContext(BackgroundDispatcher) {
                completion(execute(parameters))
            }
        }
    }

    abstract class Parameters

    object None
}

