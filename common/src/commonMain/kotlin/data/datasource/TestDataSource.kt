package data.datasource

import domain.entities.TestEntity

abstract class TestDataSource {

    abstract fun get(): List<TestEntity>?

    abstract fun save(data: List<TestEntity>)
}
