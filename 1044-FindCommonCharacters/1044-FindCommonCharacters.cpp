// Last updated: 5/13/2026, 11:40:22 PM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>result;
        vector<int>common(26, INT_MAX);
        for(string s : words){
            vector<int>freq(26, 0);
            for(char ch : s){
                freq[ch - 'a']++;
            }
            for(int i = 0; i < 26; i++) {
                common[i] = min(common[i], freq[i]);
            }
        }
        for(int i=0; i<26; i++){
            while(common[i] > 0){
                result.push_back(string(1, i + 'a'));
                common[i]--;
            }
        }
        return result;
    }
};