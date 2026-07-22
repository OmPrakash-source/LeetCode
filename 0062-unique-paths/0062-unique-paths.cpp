class Solution {
public:
    int solve(int m, int n,vector<vector<int>>&dp) {
        if(m == 1 || n == 1) return 1;
        if(dp[n][m] != -1) return dp[n][m];
        return dp[m][n] = solve(m-1, n, dp) + solve(m, n-1, dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,(vector<int>(n+1,0)));
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(i == 1 && j == 1) dp[i][j] = 1;
                else{
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                } 
            }
        }
        return dp[m][n];
    }
};