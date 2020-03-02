package utils

import kotlinx.coroutines.CoroutineDispatcher

expect object MainDispatcher: CoroutineDispatcher

expect object BackgroundDispatcher: CoroutineDispatcher
