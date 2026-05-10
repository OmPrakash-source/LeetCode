// Last updated: 5/10/2026, 11:48:26 PM
class Solution {
public:
    void bfs(int r, int c, vector<vector<int>>& g, vector<vector<bool>>& vis){
        int n = g.size();
        int m = g[0].size();
        queue<pair<int,int>>q;
        vis[r][c] = true;
        q.push({r,c});
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int nr = row + delrow[i];
                int nc = col + delcol[i];
                if(nr < n && nr >= 0 && nc >= 0 && nc < m && !vis[nr][nc] && g[nr][nc] == 1){
                    vis[nr][nc] = true;
                    q.push({nr,nc});
                }
            }
        }
    }
    int numEnclaves(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        // for row
        for(int i=0; i<m; i++){
            if(!vis[0][i] && g[0][i] == 1){ //starting row
                bfs(0, i, g, vis);
            }
            if(!vis[n-1][i] && g[n-1][i] == 1){ //ending row
                bfs(n-1, i, g, vis);
            }
        }
        for(int i=0; i<n; i++){
            if(!vis[i][0] && g[i][0] == 1){ //starting colmun
                bfs(i, 0,  g, vis);
            }
            if(!vis[i][m-1] && g[i][m-1] == 1){ //ending colmun
                bfs(i, m-1,  g, vis);
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && g[i][j] == 1){
                    count++;
                }
            }
        }
    return count;
    }
};