class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // unordered_map<string, int>mpp;
        // for(string str : wordDict) mpp[str] = 0;

        // string str = "";
        // for(char ch : s){
        //     str += ch;
        //     if(mpp.find(str) != mpp.end()){
        //         mpp[str]++;
        //         str = "";
        //     }
        // }
        // for(auto &it : mpp){
        //     if(it.second < 1) return false;
        // }
        // return true;

        unordered_set<string> dict(wordDict.begin(), wordDict.end());

        int n = s.size();
        vector<bool> dp(n + 1, false);

        dp[0] = true;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && dict.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};