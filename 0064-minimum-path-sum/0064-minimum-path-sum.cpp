class Solution {
public:
    int n, m;
    int func(int i, int j, vector<vector<int>>&dp, vector<vector<int>>&grid){
        if(i == 0 && j == 0) return grid[i][j];
        if(i < 0 || j < 0) return 1e9;

        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = grid[i][j] + min(func(i-1, j, dp, grid), func(i, j-1, dp, grid));
    }
    int minPathSum(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vector<vector<int>>dp(n, vector<int>(m, -1));
        return func(n-1, m-1, dp, grid);
    }
};