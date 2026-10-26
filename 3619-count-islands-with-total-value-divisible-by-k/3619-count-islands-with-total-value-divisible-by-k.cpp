class Solution {
int delr[4] = {0, 1, 0, -1};
int delc[4] = {1, 0, -1, 0};
    void dfs(int r, int c, long long &sum, vector<vector<int>>&grid){
        int n = grid.size();
        int m = grid[0].size();
        sum += grid[r][c];
        grid[r][c] = 0;
        for(int i=0; i<4; i++){
            int nr = delr[i] + r;
            int nc = delc[i] + c;
            if(nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] != 0){
                dfs(nr, nc, sum, grid);
            }
        }
    }
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(grid[i][j] != 0){
                    long long sum = 0;
                    dfs(i, j, sum, grid);
                    if(sum % k == 0) cnt++;
                }
                
            }
        }
        return cnt;
    }
};