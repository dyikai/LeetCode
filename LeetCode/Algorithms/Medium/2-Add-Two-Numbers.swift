/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    func addTwoNumbers(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        var carry = 0
        var tmp_node1 = l1
        var tmp_node2 = l2
        
        let headNode = ListNode(0)
        var tailNode = headNode
        
        while tmp_node1 != nil || tmp_node2 != nil {
            let tmpVal = (tmp_node1?.val ?? 0) + (tmp_node2?.val ?? 0) + carry
            carry = tmpVal / 10
            tailNode.next = ListNode(tmpVal % 10)

            tmp_node1 = tmp_node1?.next
            tmp_node2 = tmp_node2?.next
            tailNode = tailNode.next!
        }
        
        if carry > 0 {
            tailNode.next = ListNode(carry)
        }
        
        return headNode.next
    }
}
