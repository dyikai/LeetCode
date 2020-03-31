/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public var val: Int
 *     public var next: ListNode?
 *     public init(_ val: Int) {
 *         self.val = val
 *         self.next = nil
 *     }
 * }
 */
class Solution {
    func reverseList(_ head: ListNode?) -> ListNode? {
        guard var p = head else {
            return nil
        }
        var headNode = p
        var tailNode = p
        
        if p.next == nil {
            return p
        }
        
        tailNode = ListNode(p.val)
        
        while p.next != nil {
            headNode = ListNode(p.next!.val)
            headNode.next = tailNode
            tailNode = headNode
            p = p.next!
        }
        
        return headNode
    }
}
