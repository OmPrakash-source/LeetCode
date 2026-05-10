// Last updated: 5/10/2026, 11:44:40 PM
class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.length();
        while(n > 2){
            for(int i=1; i<n; i++){
                s[i-1] = (((s[i-1] - '0') + (s[i] - '0')) % 10) + '0';
            }
            n--;
        }     
        return s[0] == s[1];   
    }
};