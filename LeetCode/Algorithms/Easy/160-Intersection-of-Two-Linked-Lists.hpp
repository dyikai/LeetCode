/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tmp = headA;
        
        unordered_map<ListNode*, int> dic;
        unordered_map<ListNode*, int>::iterator ite;
        
        if (headA == nullptr && headB == nullptr) {
            return NULL;
        }
        
        while (tmp != nullptr) {
            dic.insert(pair<ListNode*, int>(tmp, 1));
            tmp = tmp->next;
        }
        
        tmp = headB;
        
        while (tmp != nullptr) {
            ite = dic.find(tmp);
            
            if (ite != dic.end()) {
                return tmp;
            }
            
            tmp = tmp->next;
        }
        
        return NULL;
    }
};
