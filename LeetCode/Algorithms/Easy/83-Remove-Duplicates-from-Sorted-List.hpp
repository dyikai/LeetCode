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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
        {
            return head;
        }

        unordered_map<int, int> dic;
        dic[head->val] = 1;
        ListNode* p = head;

        while (p->next != nullptr)
        {
            if (dic.find(p->next->val) != dic.end())
            {
                ListNode* tmp = p->next;
                if (p->next->next != nullptr)
                {
                    p->next = tmp->next;
                    tmp->next = nullptr;
                }
                else
                {
                    p->next = nullptr;
                    tmp->next = nullptr;
                }
            }
            else
            {
                dic[p->next->val] = 1;

                p = p->next;
            }
        }

        return head;
    }
};