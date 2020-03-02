package data.mappers

import data.local.TestDb
import data.models.Gender
import data.models.TestModel
import domain.entities.TestEntity

object TestMapper {

    fun fromModelToEntity(data: TestModel): TestEntity =
        TestEntity(
            id = data.login.uuid,
            name = data.name.first,
            surname = data.name.last,
            username = data.login.username,
            email = data.email,
            gender = mapGender(data.gender),
            profilePictureUrl = data.picture.large
        )

    fun fromDbToEntity(data: TestDb): TestEntity =
        TestEntity(
            id = data.id,
            name = "Database",
            surname = data.last_name,
            username = data.user_name,
            email = data.email,
            gender = data.gender,
            profilePictureUrl = data.picture_url
        )

    fun fromEntityToDb(data: TestEntity): TestDb =
        TestDb.Impl(
            id = data.id,
            name = data.name,
            last_name = data.surname,
            user_name = data.username,
            email = data.email,
            gender = data.gender,
            picture_url = data.profilePictureUrl
        )

    private fun mapGender(gender: Gender): TestEntity.Gender =
        if (gender == Gender.FEMALE) TestEntity.Gender.FEMALE else TestEntity.Gender.MALE
}
