// Last updated: 5/10/2026, 11:53:15 PM
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
ListNode* insertionSortList(ListNode* head) {
        if (!head || !head->next) return head;
        
        ListNode dup(0); // Dummy node to simplify insertion handling.
        dup.next = head;
        ListNode* curr = head; // Start with the first node.
        
        while (curr && curr->next) {
            if (curr->val <= curr->next->val) {
                curr = curr->next;
            } else {

                ListNode* toInsert = curr->next;
                curr->next = toInsert->next;
                ListNode* pos = &dup;
                while (pos->next && pos->next->val < toInsert->val) {
                    pos = pos->next;
                }
                
                // Insert `toInsert` after `pos`.
                toInsert->next = pos->next;
                pos->next = toInsert;
            }
        }
        
        return dup.next; 
    }
};