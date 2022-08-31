class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = head;
        int size = 1;

        while (p->next != nullptr)
        {
            p = p->next;
            ++size;
        }

        if (size - n == 0) {
            return head->next;
        }

        p = head;
        for (int i = 1; i <= size - n - 1; i++)
        {
            p = p->next;
        }

        p->next = p->next->next;

        return head;
    }
};