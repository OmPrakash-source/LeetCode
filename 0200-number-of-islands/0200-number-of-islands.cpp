class Solution {
public:
    int delr[4] = {0, -1, 0, 1};
    int delc[4] = {-1, 0, 1, 0};

    // void dfs(int row, int col, vector<vector<char>>& grid){
    //     int n = grid.size(), m = grid[0].size();
    //     grid[row][col] = '0';
    //     for(int i=0; i<4; i++){
    //         int r = row+delr[i];
    //         int c = col+delc[i];
    //         if(r < n && r >= 0 && c < m && c >= 0 && grid[r][c] != '0'){
    //             dfs(r, c, grid);
    //         }
    //     }
    // }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size(), cnt = 0;

        queue<pair<int,int>>q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    grid[i][j] = '0';
                    q.push({i, j});

                    while(!q.empty()){
                        int r = q.front().first;
                        int c = q.front().second;
                        
                        q.pop();
                        for(int i=0; i<4; i++){
                            int nr = delr[i] + r;
                            int nc = delc[i] + c;
                            if(nr < n && nr >= 0 && nc >= 0 && nc < m && grid[nr][nc] == '1'){
                                grid[nr][nc] = '0';
                                q.push({nr, nc});
                            }
                        }
                    }
                }
            }
        }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         if(grid[i][j] == '1'){
        //             dfs(i, j, grid);
        //             cnt++;
        //         }
        //     }
        // }
        return cnt;
    }
};
