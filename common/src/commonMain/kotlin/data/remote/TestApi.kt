package data.remote

import data.models.TestResponseModel
import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.get
import io.ktor.client.statement.HttpResponse
import io.ktor.client.statement.readText
import kotlinx.serialization.UnstableDefault
import kotlinx.serialization.json.Json

class TestApi(
    private val client: HttpClient
) {
    @UseExperimental(UnstableDefault::class)
    suspend fun getUsers(): TestResponseModel {
        val response = client.get<HttpResponse>("https://randomuser.me/api/?results=50")
        return Json.nonstrict.parse(TestResponseModel.serializer(), response.readText())
    }
}
