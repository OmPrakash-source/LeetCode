class Solution {
public:
    int func(int r, int c, vector<vector<int>>&dp, vector<vector<int>>&grid){
        if(r == 0 && c == 0) return grid[r][c];
        if(r < 0 || c < 0) return 1e9;
        if(dp[r][c] != -1) return dp[r][c];
        return dp[r][c] = grid[r][c] + min(func(r-1, c, dp, grid), func(r, c-1, dp, grid));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return func( n-1, m-1, dp, grid);
    }
};