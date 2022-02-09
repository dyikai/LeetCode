struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right)
        {
            return head;
        }
        
        ListNode *tmp = new ListNode(-1, head);
        
        ListNode *prev = tmp;
        ListNode *foll = tmp;
        
        for (int i = 0; i < left - 1; ++i) {
            prev = prev->next;
        }
        
        cout << prev->val << endl;
        
        for (int i = 0; i < right; ++i) {
            foll = foll->next;
        }
        
        cout << foll->val << endl;
        
        ListNode *tmp2 = foll->next;
        foll->next = nullptr;
        
        prev->next = reverse(prev->next, right - left + 1);
        
        while (prev->next != nullptr) {
            prev = prev->next;
        }
        prev->next = tmp2;

        return tmp->next;
    }
    
    ListNode* reverse(ListNode *head, int size) {
        ListNode* (*arr) = (ListNode **)malloc(sizeof(ListNode *) * size);
        ListNode *tmp = nullptr;
        for (int i = 0; i < size; ++i) {
            arr[i] = head;
            head = head->next;
        }
        tmp = arr[size - 1];
        head = arr[size - 1];
        for (int i = size - 2; i >= 0; --i) {
            tmp->next = arr[i];
            tmp = tmp->next;
        }
        tmp->next = nullptr;
        
        return head;
    }
};
