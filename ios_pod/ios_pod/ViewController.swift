//
//  ViewController.swift
//  ios
//
//  Created by Marco Valentino on 2019/12/22.
//  Copyright © 2019 Marco Valentino. All rights reserved.
//

import UIKit
import common
import RxSwift
import RxCocoa

class ViewController: UIViewController {
        
    private let disposeBag = DisposeBag()
    
    // TODO: DI
    private let useCase = TestUseCase()
    private lazy var viewModel = TestViewModel(usecase: useCase)
    
    override func viewDidLoad() {
        super.viewDidLoad()
    
        viewModel.outputs.users
            .subscribe(onNext: { users in
                print(users)
            })
            .disposed(by: disposeBag)
        
        viewModel.outputs.loading
            .subscribe(onNext: { loading in
                print("Loading \(loading)")
            })
            .disposed(by: disposeBag)
    }
}
