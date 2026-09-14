class Solution {
public:
    // ListNode* reverse(ListNode* &node){
    //     if(!node) return NULL;
    //     ListNode* prev = NULL;

    //     while(node != NULL){
    //         ListNode* newNode = node->next;
    //         node->next = prev;
    //         prev = node;
    //         node = newNode;
    //     }
    //     return prev;
    // }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        int carry = 0;

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        while(l1 || l2){
            if(!l1 && l2){
                int value = carry + l2->val;
                carry = value / 10;
                ListNode* newnode = new ListNode(value % 10);
                curr->next = newnode;
                curr = newnode;
                l2 = l2->next;
            }else if(!l2 && l1){
                int value = carry + l1->val;
                carry = value / 10;
                ListNode* newnode = new ListNode(value % 10);
                curr->next = newnode;
                curr = newnode;
                l1 = l1->next;
            }else{
                int value = l1->val + l2->val + carry;
                carry = value / 10;
                ListNode* newnode = new ListNode(value % 10);
                curr->next = newnode;
                curr = newnode;
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        if(carry != 0){
            ListNode* newnode = new ListNode(carry);
            curr->next = newnode;
        }
        // curr = nullptr;
        // curr = reverse(dummy->next);
        return dummy->next;
    }
};