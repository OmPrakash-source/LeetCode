class Solution {
public:
    int delr[4] = {1, 0, -1, 0};
    int delc[4] = {0, -1, 0, 1};
    int n;
    int m;

    void dfs(int r, int c, vector<vector<int>>& grid){
        grid[r][c] = 0;
        for(int i=0; i<4; i++){
            int nr = r + delr[i];
            int nc = c + delc[i];
            if(nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc]==1){
                dfs(nr, nc, grid);
            } 
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        for(int i=0; i<n; i++){
            if(grid[i][m-1] == 1)
                dfs(i, m-1, grid);
            
            if(grid[i][0] == 1)
                dfs(i, 0, grid);
            
        }

        for(int i=0; i<m; i++){
            if(grid[n-1][i] == 1)
                dfs(n-1, i, grid);
            
            if(grid[0][i] == 1)
                dfs(0, i, grid);
            
        }

        int result = 0;

        for(int i=0;i<n;i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    result++;
                }
            }
        }
        return result;
    }
};