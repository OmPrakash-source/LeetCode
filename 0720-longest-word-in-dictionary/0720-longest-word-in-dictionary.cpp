class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());
        unordered_set<string>st(words.begin(), words.end());
        string ans = "";

        for(string &word : words){
            bool flag = true;
            for(int i=1; i<=word.size(); i++){
                string temp = word.substr(0, i);
                if(st.find(temp) == st.end()){
                    flag = false;
                    break;
                }
            }
            if(flag){
                if(word.size() > ans.size() || (word.size() == ans.size() && word < ans)){
                    ans = word;
                }
            }
        }
        return ans;
    }
};