class Solution {
public:
    int n;
    int m;
    const int MOD = 1e9+7;
    int func(int i, int j, int dir, vector<vector<int>>& grid, vector<vector<vector<int>>> &dp){
        if(i >= n || j >= m) return 0;
        if(i == n-1 && j == m-1) return 1;
        

        if(dp[i][j][dir] != -1) return dp[i][j][dir];

        long long ways = 0;
        if(grid[i][j] == 1){
            if(dir == 0){
                ways += func(i, j+1, 1, grid, dp); // Come from top move to Right
            }else{
                ways += func(i+1, j, 0, grid, dp); // come from left move to down
            }
        }else{
            ways += func(i+1, j, 0, grid, dp); // move down --> 0
            ways += func(i, j+1, 1, grid, dp); // move right --> 1
        }

        return dp[i][j][dir] = ways % MOD;

    }
    int uniquePaths(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vector<vector<vector<int>>>dp(n, vector<vector<int>>(m, vector<int>(2, -1)));

        long long ans = 0;

        ans += func(0, 1, 1, grid, dp);
        ans += func(1, 0, 0, grid, dp);

        return ans % MOD;
    }
};