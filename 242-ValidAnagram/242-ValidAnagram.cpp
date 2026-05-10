// Last updated: 5/10/2026, 11:52:06 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int>vec(26, 0);
        for(char ch : s)
            vec[ch-'a']++;
        for(char ch : t){
            if(vec[ch - 'a'] > 0){
                vec[ch - 'a']--;
            }
        }
        for(int i=0; i<26; i++){
            if(vec[i] > 0) return false;
        }
        return true;
    }
};
// auto init=atexit([]{std::ofstream("display_runtime.txt")<<"0";});