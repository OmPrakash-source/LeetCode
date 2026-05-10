// Last updated: 5/10/2026, 11:50:42 PM
class Solution {
public:
        
    void dfs(vector<vector<int>>& adj, vector<bool>&vis, int st){
        vis[st] = true;
        for(int i=0; i<adj.size(); i++){
            if(adj[st][i] == 1 && !vis[i]){
                dfs(adj,vis, i);
            }
        }
    }

        int findCircleNum(vector<vector<int>>& adj) {
        int V = adj.size();
        
        vector<bool> vis(V, false);
        int count = 0;
        for(int i=0; i<V; i++){ 
            if(!vis[i]){
                dfs(adj,vis, i);
                count++;
            }
        }
        return count;
    }
    
};