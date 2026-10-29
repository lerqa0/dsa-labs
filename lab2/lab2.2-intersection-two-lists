//intersection of two linked lists

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currentA = headA;

        while (currentA != nullptr) {
        ListNode* currentB = headB;

        while (currentB != nullptr) {
            if (currentA == currentB) {
                return currentA;
            }
            currentB = currentB->next;
        }
        currentA = currentA->next;
        }
        return nullptr;
    }
};
