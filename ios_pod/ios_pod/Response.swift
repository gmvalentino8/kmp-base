//
//  Response.swift
//  ios_pod
//
//  Created by Marco Valentino on 2020/03/02.
//  Copyright © 2020 Marco Valentino. All rights reserved.
//

import Foundation
import common

public enum Response<T> {
    case success(data: T)
    case error(error: ErrorEntity)
    case loading
}
