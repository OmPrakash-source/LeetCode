class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char, int>mpp;
        // for(char ch:s)mpp[ch]++;
        // for(int i=0; i<s.size(); i++) if(mpp[s[i]] == 1) return i;
        // return -1;

        vector<int>freq(26, 0);
        for(char ch : s) freq[ch - 'a']++;

        for(int i=0; i<s.size(); i++)
            if(freq[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};