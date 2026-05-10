// Last updated: 5/10/2026, 11:45:35 PM
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
private:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
            ListNode* node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = node;
        }
        return prev;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = reverse(head);
        ListNode* curr = temp->next;
        ListNode* prev = temp;
        int maxi = prev->val;

        while(curr){
            if(curr->val >= maxi){
                maxi = curr->val;
                prev = curr;
                curr = curr->next;
            }else{
                prev->next = curr->next;
                curr = curr->next;
            }
        }
        ListNode *res = reverse(temp);
        return res;
    }
};