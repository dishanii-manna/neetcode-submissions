class Solution {
public:
    ListNode* reverselist(ListNode* head) {
        if(!head){
            return nullptr;
        }

        ListNode* head1 = head;

        if(head->next){
            head1 = reverselist(head->next);
            head->next->next = head;
        }

        head->next = nullptr;
        return head1;
    }

    bool isPalindrome(ListNode* head) {
        vector<int> arr;

        ListNode* temp = head;
        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* reverseHead = reverselist(head);
        int i = 0;
        while(reverseHead != nullptr){
            if(arr[i] != reverseHead->val){
                return false;
            }
            i++;
            reverseHead = reverseHead->next;
        }
        return true;
    }
};