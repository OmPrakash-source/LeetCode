// Last updated: 5/10/2026, 11:52:09 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode*node ) {
    node->val = node->next->val;
    node->next = node->next->next;
    }
};