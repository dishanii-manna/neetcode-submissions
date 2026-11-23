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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* p = list1;
        ListNode* q = list2;
        for(int i = 0; i < a-1; i++){
           p = p->next; 
        }
        ListNode* r = p;
        for(int i = 0; i < b-a+2; i++){
            r =r->next;
        }
        p->next = q;
        while(q->next != nullptr){
            q = q->next;
        }
        q->next = r;
        return list1;
    }
};
