//
//  9-Palindrome-Number.swift
//  LeetCode
//
//  Created by DYiKai on 2019/3/27.
//  Copyright © 2019 DYiKai. All rights reserved.
//

import Foundation

class Solution {
    func isPalindrome(_ x: Int) -> Bool {
        if x < 0 {
            return false
        }
        
        let str = "\(x)"
        var arr: [Character] = []
        for charactor in str {
            arr.append(charactor)
        }
        
        var left = 0, right = arr.count - 1
        while left < right {
            if arr[left] != arr[right] {
                return false
            }
            left = left + 1
            right = right - 1
        }
        
        return true
    }
}
