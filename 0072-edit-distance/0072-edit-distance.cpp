class Solution {
public:
    int func(string &w1, string &w2, vector<vector<int>>&dp, int idx1, int idx2){
        if(idx1 < 0) return 1 + idx2;
        if(idx2 < 0) return 1 + idx1;

        if(dp[idx1][idx2] != -1) return dp[idx1][idx2];
        int skip = INT_MAX, take = INT_MAX;

        if(w1[idx1] == w2[idx2]){
            skip = func(w1, w2, dp, idx1-1, idx2-1);
        }
        else{
            take = 1 + min({func(w1, w2, dp, idx1-1, idx2), func(w1, w2, dp, idx1, idx2-1), func(w1, w2, dp, idx1-1, idx2-1)});
        }
        return dp[idx1][idx2] = min(take, skip);

    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>>dp(n, vector<int>(m, -1));

        return func(word1, word2, dp, n-1, m-1);

        // for(int i=0; i<=n; i++) dp[i][0] = i;
        // for(int i=0; i<=m; i++) dp[0][i] = i;
        // for(int i=1; i<=n; i++){
        //     for(int j=1; j<=m; j++){
        //         if(word1[i-1] == word2[j-1]){
        //             dp[i][j] = dp[i-1][j-1];
        //         }else{
        //             dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
        //         }
        //     }
        // }
        // return dp[n][m];
    }
};