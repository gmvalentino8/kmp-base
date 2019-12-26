package domain.repositories

import domain.entities.TestEntity

interface TestRepository {

    suspend fun getUsers(): List<TestEntity>
}
