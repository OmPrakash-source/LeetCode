class Solution {
public:
    int maxsum(vector<vector<int>>& grid, vector<vector<int>>& dp, int n, int m){
        if(n < 0 || m < 0) return 1e9;
        if(n == 0 && m == 0) return grid[n][m];
        if(dp[n][m] != -1) return dp[n][m];
        return dp[n][m] = grid[n][m] + min(maxsum(grid, dp, n-1, m), maxsum(grid, dp, n, m-1));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return maxsum(grid, dp, n-1, m-1);
    }
};