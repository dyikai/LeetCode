//
//  1-Two-Sum.swift
//  LeetCode
//
//  Created by DYiKai on 2019/3/27.
//  Copyright © 2019 DYiKai. All rights reserved.
//

import Foundation

class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var numsDic = [Int: Int]()
        
        nums.enumerated().forEach { (index, value) in
            numsDic[value] = index
        }
        
        
        for (index, value) in nums.enumerated() {
            let key = target - value
            if numsDic[key] != nil && index != numsDic[key]! {
                return [index, numsDic[key]!]
            }
        }
        
        
        return []
    }
}
