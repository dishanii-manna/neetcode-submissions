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
        vector<int> temp;
        ListNode* head1 = head;
        while(head1 != nullptr){
            if(head1->val != val){
                temp.push_back(head1->val);
            }
                head1 = head1->next;
            
        }
        ListNode* dummy = new ListNode(0);
        ListNode* head2 = dummy;

        for(int i = 0; i < temp.size(); i++){
            head2->next = new ListNode(temp[i]);
            head2 = head2->next;
        }

        return dummy->next;
    }
};