// Last updated: 5/10/2026, 11:52:58 PM
class Solution {
public:
    int titleToNumber(string ct) {
        int ans = 0;
        for(char ch:ct){
            ans = ans * 26 + (ch - 'A' + 1);
        }
        return ans;
    }
};