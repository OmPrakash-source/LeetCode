// Last updated: 5/10/2026, 11:51:11 PM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (p.size() > s.size()) return {};

        vector<int> need(26, 0), win(26, 0);
        for (char c : p) need[c - 'a']++;

            vector<int> ans;
            int k = p.size();
            for (int i = 0; i < s.size(); i++) {
                win[s[i] - 'a']++;
        
                if (i >= k)
                    win[s[i - k] - 'a']--;
        
                if (win == need)
                    ans.push_back(i - k + 1);
        }
    return ans;
    }
};