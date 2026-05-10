// Last updated: 5/10/2026, 11:46:09 PM
class Solution {
    int sizE(ListNode* head){
        int count = 1;
        while(head->next){
            head = head->next;
            count++;
        }
        return count/2;
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL)return NULL;
        int size = sizE(head)-1;
        if(size < 0)return NULL;
        ListNode* temp = head;
        while(size--){
            temp = temp->next;
        }
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};