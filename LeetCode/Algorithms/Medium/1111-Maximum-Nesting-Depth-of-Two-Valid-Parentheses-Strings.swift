class Solution {
    func maxDepthAfterSplit(_ seq: String) -> [Int] {
        var depth = 0
        var result = [Int]()
        
        for c in seq {
            if c == "(" {
                depth += 1
                result.append(depth % 2)
            } else {
                result.append(depth % 2)
                depth -= 1
            }
        }
        
        return result
    }
}
