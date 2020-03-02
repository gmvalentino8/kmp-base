package data.local

import data.datasource.TestDataSource
import domain.entities.TestEntity

object TestStore : TestDataSource() {
    
    private var test: List<TestEntity>? = null

    override fun get(): List<TestEntity>? {
        return test
    }

    override fun save(data: List<TestEntity>) {
        test = data
    }
}
