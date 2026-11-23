
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr) 
            return head;

        ListNode* temp = head;
        ListNode* curr = head->next;

        while(curr != nullptr) {
            if(temp->val != curr->val) {
                temp->next = curr;
                temp = curr;
            }
            curr = curr->next;
        }

        temp->next = nullptr;

        return head;
    }
};
