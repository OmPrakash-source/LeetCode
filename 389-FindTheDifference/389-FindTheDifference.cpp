// Last updated: 5/10/2026, 11:51:26 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mpp;
        for (char c : s) mpp[c]++;
        for (char c : t) mpp[c]--;
        for (auto &it : mpp)
            if (it.second < 0) return it.first;
        return 'a';
    }
};