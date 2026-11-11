class Solution {
public:
    int delr[4] = {1, 0, -1, 0};
    int delc[4] = {0, -1, 0, 1};
    int n;
    int m;

    void dfs(int r, int c, int &cnt, vector<vector<int>>& grid){
        grid[r][c] = 0;
        cnt++;
        for(int i=0; i<4; i++){
            int nr = r + delr[i];
            int nc = c + delc[i];
            if(nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc]==1){
                dfs(nr, nc, cnt, grid);
            } 
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int temp = 0;

        for(int i=0; i<n; i++){
            if(grid[i][m-1] == 1)
                dfs(i, m-1, temp, grid);
            
            if(grid[i][0] == 1)
                dfs(i, 0, temp, grid);
            
        }

        for(int i=0; i<m; i++){
            if(grid[n-1][i] == 1)
                dfs(n-1, i, temp, grid);
            
            if(grid[0][i] == 1)
                dfs(0, i, temp, grid);
            
        }

        int result = 0;

        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    dfs(i, j, cnt, grid);
                }
            }
            result += cnt;
        }
        return result;
    }
};