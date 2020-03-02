package data.models

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class TestResponseModel(
    @SerialName("results") val results: List<TestModel>
)

@Serializable
data class TestModel(
    @SerialName("cell") val cell: String,
    @SerialName("email") val email: String,
    @SerialName("gender") val gender: Gender,
    @SerialName("name") val name: Name,
    @SerialName("phone") val phone: String,
    @SerialName("picture") val picture: Picture,
    @SerialName("login") val login: Login
)

@Serializable
enum class Gender {
    @SerialName("male") MALE,
    @SerialName("female") FEMALE
}

@Serializable
data class Picture(
    @SerialName("large") val large: String,
    @SerialName("medium") val medium: String,
    @SerialName("thumbnail") val thumbnail: String
)

@Serializable
data class Name(
    @SerialName("first") val first: String,
    @SerialName("last") val last: String,
    @SerialName("title") val title: String
)

@Serializable
data class Login(
    @SerialName("md5") val md5: String,
    @SerialName("password") val password: String,
    @SerialName("salt") val salt: String,
    @SerialName("sha1") val sha1: String,
    @SerialName("sha256") val sha256: String,
    @SerialName("username") val username: String,
    @SerialName("uuid") val uuid: String
)
