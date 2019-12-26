package domain.entities

data class TestEntity(
    val id: String,
    val name: String,
    val surname: String,
    val username: String,
    val email: String,
    val gender: Gender,
    val profilePictureUrl: String
) {
    enum class Gender {
        MALE, FEMALE
    }
}
