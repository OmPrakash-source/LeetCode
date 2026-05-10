// Last updated: 5/10/2026, 11:51:27 PM
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>con(26,0);
        for(char ch : s) con[ch-'a']++;
        for(int i=0; i<s.size(); i++){
           if(con[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};