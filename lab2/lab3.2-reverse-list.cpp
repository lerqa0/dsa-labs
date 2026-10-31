//reverse linked list

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        vector<int> reverse;

        while (current != nullptr) {
            reverse.push_back(current->val);
            current = current->next;
        }

        current = head;
        int i = reverse.size() - 1;

        while (current != nullptr) {
            current->val = reverse[i];
            current = current->next;
            i--;
        }
        return head;
    }
};
