class Solution {
public:
    int delr[4] = {0, -1, 0, 1};
    int delc[4] = {-1, 0, 1, 0};
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;
        queue<pair<pair<int,int>, int>>q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({{i ,j}, 0});
                    grid[i][j] = 0;
                }
            }
        }
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int val = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int c = col+delc[i];
                int r = row+delr[i];
                count = val;
                if(r < n && r >= 0 && c < m && c >= 0 && grid[r][c] == 1){
                    q.push({{r, c}, val+1});
                    grid[r][c] = 0;
                }
            }

        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        return count;
    }
};