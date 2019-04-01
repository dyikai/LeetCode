//
//  7-Reverse-Integer.swift
//  LeetCode
//
//  Created by DYiKai on 2019/3/27.
//  Copyright © 2019 DYiKai. All rights reserved.
//

import Foundation

class Solution {
    func reverse(_ x: Int) -> Int {
        if x < Int32.min || x > Int32.max || x == 0 {
            return 0
        }
        
        var str: String
        var result: Int
        
        if x < 0 {
            str = "\(-1 * x)"
        } else {
            str = "\(x)"
        }
        
        str = String(str.reversed())
        result = x < 0 ? -1 * Int(str)! : Int(str)!
        
        if result < Int32.min || result > Int32.max {
            return 0
        }
        
        return result
    }
}
