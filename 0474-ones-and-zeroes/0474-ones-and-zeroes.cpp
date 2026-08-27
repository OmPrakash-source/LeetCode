class Solution {
public:
    int func(int idx, vector<string>& strs, int m, int n, vector<vector<vector<int>>> &dp){

        if((m == 0 && n == 0) || idx >= strs.size()) return 0;
        
        int pick = 0;
        int zeros = 0, ones = 0;

        if(dp[idx][m][n] != -1){
            return dp[idx][m][n];
        }
        int skip = func(idx+1, strs, m, n, dp);
        for (char c : strs[idx]) {
            if (c == '0') zeros++;
            else ones++;
        }
        if (zeros <= m && ones <= n) {
            pick = 1 + func(idx + 1, strs,  m - zeros, n - ones, dp);
        }

        return dp[idx][m][n] = max(pick, skip);

    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> dp(strs.size(),vector<vector<int>>(m + 1,vector<int>(n + 1, -1)));

        return func(0, strs, m, n, dp);
    }
};