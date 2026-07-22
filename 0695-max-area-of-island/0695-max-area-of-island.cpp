class Solution {
public:
    int maxi = 0;
    int delr[4] = {0, -1, 0, 1};
    int delc[4] = {-1, 0, 1, 0};
    void dfs(vector<vector<int>>& grid, int r, int c, int &count){
        int n = grid.size(), m = grid[0].size();
        grid[r][c] = 2;
        count++;
        maxi = max(maxi, count);
        for(int i=0; i<4; i++){
            int nr = r + delr[i];
            int nc = c + delc[i];
            if(nr < n && nc < m && nr >= 0 && nc >= 0 && grid[nr][nc] == 1){
                dfs(grid, nr, nc, count);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    int count = 0;
                    dfs(grid, i, j, count);
                }
            }
        }
        return maxi;
    }
};