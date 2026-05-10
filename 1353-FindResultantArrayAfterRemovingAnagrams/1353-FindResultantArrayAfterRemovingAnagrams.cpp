// Last updated: 5/10/2026, 11:47:59 PM
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        string st = "";
        for(int i = 0; i<words.size(); i++){
            string word = words[i];
            sort(word.begin(),word.end());
            if(word != st){
                ans.push_back(words[i]);
                st = word;
            }
        }
        return ans;
    }
};