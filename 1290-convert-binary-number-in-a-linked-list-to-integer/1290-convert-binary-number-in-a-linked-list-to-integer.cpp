// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//         ListNode* temp = head;
//         long long num = 0;
//         while(temp != NULL){
//             num = num*10+temp->val;
//             temp = temp->next;
//         }
//         int result = 0;
//         int i = 0;
//         while(num > 0){
//             result += (num %10 * pow(2,i++));
//             num /= 10;
//         }
//         return result;
//     }
// };

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;

        while (head) {
            ans = ans * 2 + head->val;
            head = head->next;
        }

        return ans;
    }
};