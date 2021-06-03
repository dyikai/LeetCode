/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head = ListNode();
        ListNode *tail = &head;
        
        while (l1 != nullptr || l2 != nullptr) {
            
            if (l1 == nullptr) {
                tail->next = l2;
                break;
            }
            
            if (l2 == nullptr) {
                tail->next = l1;
                break;
            }
            
            if (l1->val <= l2->val) {
                tail->next = l1;
                tail = tail->next;
                l1 = l1->next;
            } else {
                tail->next = l2;
                tail = tail->next;
                l2 = l2->next;
            }
        }

        return head.next;
    }
};