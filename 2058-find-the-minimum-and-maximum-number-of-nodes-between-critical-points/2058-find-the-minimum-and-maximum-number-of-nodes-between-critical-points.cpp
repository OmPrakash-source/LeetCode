class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>result;
        if(head == NULL || head->next == NULL || head->next->next == NULL || head->next->next->next == nullptr) return {-1, -1};
        ListNode* prev = head;
        ListNode* curr = prev->next;
        
        int idx = 1;
        while(curr->next != NULL){
            ListNode* nextnode = curr->next;
            idx++;
            if((curr->val < prev->val && curr->val < nextnode->val) || (curr->val > prev->val && curr->val > nextnode->val)){
                result.push_back(idx);
            }
            prev = curr;
            curr = nextnode;
            nextnode = nextnode->next;
        }


        if(result.size() < 2) return {-1, -1};

        int n = result.size()-1;
        int mini = result[1] - result[0];

        for(int i=1; i<result.size(); i++){
            mini = min(mini, result[i] - result[i-1]);
        }

        return {mini, result[n] - result[0]};
    }
};