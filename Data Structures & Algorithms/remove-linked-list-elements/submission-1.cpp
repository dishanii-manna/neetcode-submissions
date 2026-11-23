
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* res = new ListNode(0);
        ListNode* curr = head;
        ListNode* temp = res;

        while(curr != nullptr) {
            if(curr->val != val) {
                temp->next = curr;
                temp = curr;
            }
            curr = curr->next;
        }

        temp->next = nullptr;

        return res->next;
    }
};
