class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr = list1;
        ListNode* str = NULL;
        ListNode* end = NULL;
        int i = 0;
        while(i <= b+1){
            if(i == a-1) str = curr;
            if(i == b+1) end = curr;
            curr = curr->next;
            i++;
        }
        curr = list2;
        
        while(curr->next) curr = curr->next;
        
        str->next = list2;
        curr->next = end;
        return list1;
    }
};