class Solution {
    int delr[4] = {0, 1, 0, -1};
    int delc[4] = {1, 0, -1, 0};

    void dfs(int r, int c, vector<vector<int>>&grid){
        int n = grid.size();
        int m = grid[0].size();
        grid[r][c] = 1;
        for(int i=0; i<4; i++){
            int nr = delr[i] + r;
            int nc = delc[i] + c;
            if(nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == 0){
                dfs(nr, nc, grid);
            }
        }
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

       
        for(int i=0; i<n; i++){
            if(grid[i][0] == 0){
                dfs(i, 0, grid);
            }
            if(grid[i][m-1] == 0){
                dfs(i, m-1, grid);
            }
        }
         for(int i=0; i<m; i++){
            if(grid[0][i] == 0){
                dfs(0, i, grid);
            }
            if(grid[n-1][i] == 0){
                dfs(n-1, i, grid);
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 0){
                    count++;
                    dfs(i, j, grid);
                }
            }
        }
        return count;
    }
};

