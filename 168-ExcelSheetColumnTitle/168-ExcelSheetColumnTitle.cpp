// Last updated: 5/10/2026, 11:53:01 PM
class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n > 0){
            int last_digit =( n-1 ) % 26;
            char c = 'A' + last_digit;
            n = (n-1) / 26;
            ans += c;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};