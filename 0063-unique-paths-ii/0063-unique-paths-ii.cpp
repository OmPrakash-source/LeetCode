class Solution {
public:
    int dfs(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &grid){
        if(i >= 0 && j >= 0 && grid[i][j] == 1) return 0;
        if(i == 0 && j == 0) return 1;
        if(i < 0 || j < 0) return 0;

        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = dfs(i-1, j, dp, grid) + dfs(i, j-1, dp, grid);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return dfs(n-1, m-1, dp, obstacleGrid);

        // for(int i=1; i<=n; i++){
        //     for(int j=0; j<=m; j++){
        //         if(obstacleGrid[i][j] == 1) dp[i][j] = 0;
        //         else if(i == 0 && j == 0) dp[i][j] = 1;
        //         else dp[i][j] = dp[i+1][j] + dp[i][j+1];
        //     }
        // }
        // return dp[n][m];
    }
};