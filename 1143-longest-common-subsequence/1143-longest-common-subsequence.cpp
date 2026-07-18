class Solution {
public:
    // int func(int idx1, int idx2, string &t1, string &t2, vector<vector<int>> &dp){
    //     if(idx1 < 0 || idx2 < 0) return 0;
    //     int skip = 0;
    //     if(dp[idx1][idx2] != -1){
    //         return dp[idx1][idx2];
    //     }
    //     if(t1[idx1] == t2[idx2]){
    //         skip = 1 + func(idx1-1, idx2-1, t1, t2, dp);
    //     }
    //     int take = max(func(idx1-1, idx2, t1, t2, dp), func(idx1, idx2-1, t1, t2, dp));
    //     return dp[idx1][idx2] = max(take, skip);

    // }
    int longestCommonSubsequence(string t1, string t2) {
        int n = t1.size(), m = t2.size();
        // vector<vector<int>>dp(n, vector<int>(m, -1));
        // return func(n-1, m-1, t1, t2, dp);

        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(t1[i-1] == t2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        return dp[n][m];
    }
};