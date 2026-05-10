// Last updated: 5/10/2026, 11:52:40 PM
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
        
        if(head == NULL) return head;

        ListNode* curr = head;
        ListNode* dummy = new ListNode(-1);
        dummy->next = curr;
        ListNode* prev = dummy;

        while(curr != NULL){
            
            if(curr->val != val){
                prev = curr;
            }else{
                prev->next = curr->next;
                // curr->next = NULL;
            }
            curr = curr->next;
        }
        return dummy->next;
    }
};