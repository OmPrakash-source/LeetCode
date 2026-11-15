class Solution {
public:
    int n , m;
    int delr[4] = {0, -1, 0, 1};
    int delc[4] = {-1, 0, 1, 0};
    int dfs(int r, int c, vector<vector<int>>& grid, vector<vector<int>>&dp){
        int val = grid[r][c];
        if(dp[r][c] != -1) return dp[r][c];
        int cnt = 1;
        
        for(int i=0; i<4; i++){
            int nr = r + delr[i];
            int nc = c + delc[i];
            if(nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] > val){
                cnt = max(cnt, dfs(nr, nc, grid, dp)+1);
            }
        }
        return dp[r][c] = cnt;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();
        int maxi = 0;
        vector<vector<int>>dp(n, vector<int>(m, -1));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int cnt = dfs(i, j, matrix, dp);
                maxi = max(maxi, cnt);
            }
        }
        return maxi;
    }
};