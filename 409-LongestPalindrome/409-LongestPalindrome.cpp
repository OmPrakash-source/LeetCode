// Last updated: 5/10/2026, 11:51:23 PM
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>freq;
        for(char ch : s)freq[ch]++;
        int count = 0;
        bool odd = false;
        for(auto &v : freq){
            if(v.second % 2 == 0){
                count += v.second;
                // freq[v.first]--;
            }else{
                count += v.second - 1; 
                odd = true;
            }
        }
        return (odd)?count +1 : count;
    }
};