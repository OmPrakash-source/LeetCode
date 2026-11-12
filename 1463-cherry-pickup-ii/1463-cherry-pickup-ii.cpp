
class Solution {
public:
    int delr[3] = {1, 1, 1};
    int delc[3] = {-1, 0, 1};
    int n, m;
    int dfs(int r, int c1, int c2, vector<vector<vector<int>>>& dp, vector<vector<int>>& grid) {
        if(c1 < 0 || c1 >= m || c2 < 0 || c2 >= m)
            return -1e9;

        if(r == n - 1) {
            int cherries = grid[r][c1];
            if(c1 != c2)
                cherries += grid[r][c2];

            return cherries;
        }

        // Memoization
        if(dp[r][c1][c2] != -1)
            return dp[r][c1][c2];

        // Current cherries
        int cherries = grid[r][c1];

        if(c1 != c2) cherries += grid[r][c2];

        int maxi = -1e9;

        // Try all 9 combinations
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                int nr = r + delr[i];
                int nc1 = c1 + delc[i];
                int nc2 = c2 + delc[j];

                int next = dfs(nr, nc1, nc2, dp, grid);

                maxi = max(maxi, next);
            }
        }

        return dp[r][c1][c2] = cherries + maxi;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));

        return dfs(0, 0, m - 1, dp, grid);
    }
};
