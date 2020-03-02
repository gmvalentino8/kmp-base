//
//  TestViewModel.swift
//  ios_pod
//
//  Created by Marco Valentino on 2020/03/02.
//  Copyright © 2020 Marco Valentino. All rights reserved.
//

import Foundation
import RxSwift
import RxCocoa
import common

protocol ViewModel {
    associatedtype Input
    associatedtype Output
    var inputs: Input { get }
    var outputs: Output { get }
}

final class TestViewModel: ViewModel {
    
    // MARK: - UseCases
    private let usecase: TestUseCase
    private let disposeBag = DisposeBag()
    
    // MARK: - Inputs
    struct Input {
        let load: AnyObserver<Bool>
    }
    
    var inputs: TestViewModel.Input
    private let _email = PublishSubject<String>()
    
    // MARK: - Outputs
    struct Output {
        let loading: Observable<Bool>
        let error: Observable<ErrorEntity>
        let users: Observable<[TestEntity]>
    }
    
    var outputs: TestViewModel.Output
    
    init(usecase: TestUseCase) {
        self.usecase = usecase
        
        inputs = Input(email: _email.asObserver())
        
        outputs = Output(loading: _loading.asObservable(),
                         error: _error.asObservable(),
                         users: users.asObservable())
    }
}
