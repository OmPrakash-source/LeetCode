// Last updated: 5/10/2026, 11:45:51 PM
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mpp;
        for(char ch : s){
            mpp[ch]++;
            if(mpp[ch] >= 2) return ch;
        }
        return ' ';
    }
};