// Last updated: 5/10/2026, 11:45:55 PM
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*newhead = new ListNode(-1);
        ListNode*curr = newhead;
        head = head->next;
        while(head){
            int sum = 0;
            while(head->val!=0){
                sum += head->val;
                head = head->next;
            }
            ListNode*newNode = new ListNode(sum);
            curr->next = newNode;
            curr = curr->next;

            
            if(head->val == 0) sum = 0;
            head = head->next;
        }
        return newhead->next;
    }
};