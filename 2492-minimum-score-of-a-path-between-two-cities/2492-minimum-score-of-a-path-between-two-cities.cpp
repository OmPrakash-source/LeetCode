class Solution {
public:
    int mini = INT_MAX;
    void dfs(int idx, vector<vector<pair<int,int>>>&adj, vector<bool>&vis){
        vis[idx] = true;
        for(auto &it : adj[idx]){
            int edge = it.first;
            int wt = it.second;
            mini = min(wt, mini);
            if(!vis[edge]){
                dfs(edge, adj, vis);
            }
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        
        
        vector<vector<pair<int, int>>> adj(n + 1);
        vector<bool>vis(n, false);
        for(auto &it : roads){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        dfs(1, adj, vis);
        return mini;
    }
};