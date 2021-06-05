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
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* p = head;

        while (p != nullptr)
        {
            if (p == head && head->val == val)
            {
                head = head->next;
                p = head;
                continue;
            }

            ListNode* tmp = p->next;

            if (tmp != nullptr)
            {
                if (tmp->val == val)
                {
                    p->next = tmp->next;
                    //p = p->next;
                    tmp->next = nullptr;
                }
                else
                {
                    p = p->next;
                }
            }
            else
            {
                p = p->next;
            }
            
        }

        return head;
    }
};