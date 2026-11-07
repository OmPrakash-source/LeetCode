class Solution {
public:
    int n, m, cnt = 0;
    int delr[4] = {-1, 0, 1, 0};
    int delc[4] = {0, 1, 0, -1};
    // void dfs(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& vis){
    //     vis[r][c] = true;
    //     for(int i=0; i<4; i++){
    //         int nr = r + delr[i];
    //         int nc = c + delc[i];
    //         if(nr < 0 || nr >= n || nc < 0 || nc >= m || grid[nr][nc] == 0) cnt++;

    //         if(nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == 1 && !vis[nr][nc]){
    //             dfs(nr, nc, grid, vis);
    //         }
    //     }
    // }
    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vector<vector<bool>>vis(n ,vector<bool>(m, false));
        queue<pair<int,int>>q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1 && !vis[i][j]){
                    // dfs(i, j, grid, vis);
                    vis[i][j] = true;
                    q.push({i, j});
                }
            }
        }

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i=0; i<4; i++){
                int nr = delr[i] + r;
                int nc = delc[i] + c;
                if(nr < 0 || nc < 0 || nr >= n || nc >= m || grid[nr][nc] == 0) cnt++;

                if(nr>=0 && nc>=0 && nc<m && nr<n && grid[nr][nc] == 1 && !vis[nr][nc]){
                    vis[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
        return cnt;
    }
};