// Last updated: 5/10/2026, 11:51:29 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         vector<int> freq(26);
            for (char& ch : ransomNote)
                freq[ch - 'a']++;
            for (char& ch : magazine)
                freq[ch - 'a']--;
            for (int& val : freq)
                if (val > 0)
                    return false;
            return true;
    }
};