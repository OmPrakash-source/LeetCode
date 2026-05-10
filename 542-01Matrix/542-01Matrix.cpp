// Last updated: 5/10/2026, 11:50:45 PM
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0; j<m;j++){
                if(mat[i][j] == 0){
                    q.push({{i,j},0});
                    vis[i][j] = true;
                }else vis[i][j] = false;
            }
        }
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int step = q.front().second;
            q.pop();
            ans[r][c] = step;
            for(int i=0; i<4; i++){
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];
                if(nrow < n && ncol < m && ncol >= 0 && nrow >= 0 && vis[nrow][ncol]==false){
                    q.push({{nrow,ncol},step + 1});
                    vis[nrow][ncol] = true;
                }
            }
        }
        return ans;
    }
};