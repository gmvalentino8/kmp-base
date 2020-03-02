package data.repositories

import com.kmp.TestDatabase
import data.local.TestStore
import data.mappers.TestMapper
import domain.repositories.TestRepository
import domain.entities.TestEntity
import data.remote.TestApi

class TestDataRepository(
    private val store: TestStore,
    private val api: TestApi,
    private val db: TestDatabase
) : TestRepository {

    override suspend fun getUsers(update: Boolean): List<TestEntity> {
        return if (update) {
            getRemoteUsers()
        } else {
            getCachedUsers().let { cachedUsers ->
                if (!cachedUsers.isNullOrEmpty()) {
                    cachedUsers
                } else {
                    getLocalUsers().let { localUsers ->
                        if (!localUsers.isNullOrEmpty()) {
                            saveCachedUsers(localUsers)
                            localUsers
                        } else {
                            getRemoteUsers()
                        }
                    }
                }
            }
        }
    }

    private fun getCachedUsers(): List<TestEntity>? {
        return store.get()
    }

    private fun saveCachedUsers(data: List<TestEntity>) {
        store.save(data.map { it.copy(name = "CACHE") })
    }

    private suspend fun getRemoteUsers(): List<TestEntity> {
        run {
            api.getUsers().results.map(TestMapper::fromModelToEntity)
        }.let {
            saveLocalUsers(it)
            return it
        }
    }

    private fun saveLocalUsers(data: List<TestEntity>) {
        data.forEach { db.testQueries.insertModel(TestMapper.fromEntityToDb(it)) }
        saveCachedUsers(data)
    }

    private fun getLocalUsers(): List<TestEntity>
        = db.testQueries.selectAll().executeAsList().map(TestMapper::fromDbToEntity)
}
