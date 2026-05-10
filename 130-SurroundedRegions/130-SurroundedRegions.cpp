// Last updated: 5/10/2026, 11:53:38 PM
class Solution {
public:
    void dfs(vector<vector<char>>& b,vector<vector<bool>>&vis, int r, int c){
        vis[r][c] = true;
        int n = b.size();
        int m = b[0].size();
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        for(int i=0; i<4; i++){
            int nr = r + delrow[i];
            int nc = c + delcol[i];
            if(nr < n && nc < m && nr >= 0 && nc >= 0 && !vis[nr][nc] && b[nr][nc] == 'O'){
                dfs(b,vis,nr,nc);
            }
        }
    }
    void solve(vector<vector<char>>& b) {
        int n = b.size();
        int m = b[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0; i<m; i++){
            //first row
            if(!vis[0][i] && b[0][i] == 'O'){
                dfs(b,vis,0,i);
            }
            //last row
            if(!vis[n-1][i] && b[n-1][i] == 'O'){
                dfs(b,vis,n-1, i);
            }
        }
        for(int i=0; i<n; i++){
            //first col
            if(!vis[i][0]  && b[i][0] == 'O'){
                dfs(b,vis,i,0);
            }
            //last col
            if(!vis[i][m-1] && b[i][m-1] == 'O'){
                dfs(b,vis,i,m-1);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && b[i][j] == 'O'){
                    b[i][j] = 'X';
                }
            }
        }
    }
};