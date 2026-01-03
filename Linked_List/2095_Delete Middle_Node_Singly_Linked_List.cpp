class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;

        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        int mid = count / 2;

        temp = head;
        for (int i = 0; i < mid - 1; i++) {
            temp = temp->next;
        }

        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

        return head;
    }
};
