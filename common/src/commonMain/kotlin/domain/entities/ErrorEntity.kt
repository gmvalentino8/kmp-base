package domain.entities

sealed class ErrorEntity(
    open val throwable: Throwable
) : Throwable(throwable) {

    data class Network(
        override val throwable: Throwable
    ) : ErrorEntity(throwable)

    data class NotFound(
        override val throwable: Throwable
    ) : ErrorEntity(throwable)

    data class Unauthorized(
        override val throwable: Throwable
    ) : ErrorEntity(throwable)

    data class AccessDenied(
        override val throwable: Throwable
    ) : ErrorEntity(throwable)

    data class Unavailable(
        override val throwable: Throwable
    ) : ErrorEntity(throwable)

    data class BadRequest(
        override val throwable: Throwable
    ) : ErrorEntity(throwable)

    data class Unknown(
        override val throwable: Throwable
    ) : ErrorEntity(throwable)

    // ここで他のエラーを追加します
}
