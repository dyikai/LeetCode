class Solution {
    func isPalindrome(_ s: String) -> Bool {
        if s.count == 0 || s.count == 1 {
            return true
        }

        let pattern = "[^a-z0-9]"
        let regex = try! NSRegularExpression(pattern: pattern, options: [])
        let str = regex.stringByReplacingMatches(in: s.lowercased(), options: [], range: NSMakeRange(0, s.count), withTemplate: "")

        var leftStr = ""
        var rightStr = ""
        let middle = str.count / 2

        leftStr = String(str.prefix(middle))
        rightStr = String(str.suffix(middle).reversed())
        
        if leftStr == rightStr {
            return true
        } else {
            return false
        }
    }
}
