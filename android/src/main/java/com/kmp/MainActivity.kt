package com.kmp

import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import com.kmp.common.Result
import domain.usecases.TestUseCase
import data.remote.TestApi
import data.repositories.TestDataRepository
import di.testKodein
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import org.kodein.di.generic.instance

class MainActivity : AppCompatActivity() {

    private val useCase: TestUseCase by testKodein.instance()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        GlobalScope.launch {
            useCase.execute(TestUseCase.Parameters("")).let {
                when (it) {
                    is Result.Success -> {
                        Log.d("SUCCESS", it.data.toString())
                    }
                    is Result.Error -> {
                        Log.d("ERROR", it.error.toString())
                    }
                    is Result.Loading -> {
                        Log.d("LOADING", "loading")
                    }
                }
            }
        }
    }
}
