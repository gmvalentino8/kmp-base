package data.repositories

import data.mappers.TestMapper
import domain.repositories.TestRepository
import domain.entities.TestEntity
import data.remote.TestApi
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.withContext

class TestDataRepository(
    private val api: TestApi
) : TestRepository {

    override suspend fun getUsers(): List<TestEntity>
        = api.getUsers().results.map(TestMapper::fromModelToEntity)
}
