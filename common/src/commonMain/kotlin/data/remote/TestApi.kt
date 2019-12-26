package data.remote

import data.mappers.TestMapper
import data.models.TestModel
import data.models.TestResponseModel
import domain.entities.TestEntity
import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.get
import io.ktor.client.statement.HttpResponse
import io.ktor.client.statement.readText
import kotlinx.serialization.json.Json

class TestApi {

    private val client = HttpClient {
        install(JsonFeature) {
            serializer = KotlinxSerializer()
        }
    }

    suspend fun getUsers(): TestResponseModel {
        val response = client.get<HttpResponse>("https://randomuser.me/api/?results=50")
        return Json.nonstrict.parse(TestResponseModel.serializer(), response.readText())
    }
}
