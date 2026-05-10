// Last updated: 5/10/2026, 11:51:52 PM
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> temp;
        string current = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                temp.push_back(current);
                current = "";
            } else {
                current += s[i];
            }
        }
        temp.push_back(current);

        // MANDATORY check
        if (temp.size() != pattern.size()) return false;

        map<string, char> mpp;
        set<char> used;

        for (int i = 0; i < pattern.size(); i++) {
            string word = temp[i];
            char ch = pattern[i];

            if (mpp.count(word)) {
                if (mpp[word] != ch)
                    return false;
            } else {
                if (used.count(ch))
                    return false;
                mpp[word] = ch;
                used.insert(ch);
            }
        }

        return true;
    }
};
