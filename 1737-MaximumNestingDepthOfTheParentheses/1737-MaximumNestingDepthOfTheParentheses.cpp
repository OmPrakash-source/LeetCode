// Last updated: 5/10/2026, 11:46:51 PM
class Solution {
public:
    int maxDepth(string s) {
        int mx = 0;
        int count = 0;
        for(char i : s){
            if(i == '('){
                count++;
                mx = max(count, mx);
            }else if(i == ')'){
                count--;
            }else{
                continue;
            }
        }
        return mx;
    }
};