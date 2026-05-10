// Last updated: 5/10/2026, 11:50:04 PM
class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        while(curr){
            if(curr->child){
                Node* nextNode = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;
                while(curr->next)
                    curr = curr->next;
                if(nextNode) {
                    curr->next = nextNode;
                    nextNode->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};