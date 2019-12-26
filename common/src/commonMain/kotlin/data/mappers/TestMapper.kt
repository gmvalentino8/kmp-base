package data.mappers

import data.models.TestModel
import domain.entities.TestEntity

object TestMapper {

    fun fromModelToEntity(model: TestModel): TestEntity =
        TestEntity(
            id = model.login.uuid,
            name = model.name.first,
            surname = model.name.last,
            username = model.login.username,
            email = model.email,
            gender = if (model.gender == "female") TestEntity.Gender.FEMALE else TestEntity.Gender.MALE,
            profilePictureUrl = model.picture.large
        )
}
