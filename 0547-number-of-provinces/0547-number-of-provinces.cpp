class Solution {
    void dfs(int u, vector<vector<int>>& adj, vector<bool>& vis){
        vis[u] = true;
        for(auto it : adj[u])
            if(!vis[it])
                dfs(it, adj, vis);
    }
    // void bfs(int u, vector<vector<int>>& adj, vector<bool>& vis, queue<int>q){
    //     q.push(u);
    //     vis[u] = true;
    //     while(!q.empty()){
    //         auto v = q.front();
    //         q.pop();
    //         for(auto it : adj[v]){
    //             if(!vis[it]){
    //                 vis[it] = true;
    //                 q.push(it);
    //             }
    //         }
    //     }
    // }
public:
    int findCircleNum(vector<vector<int>>& adj) {
        vector<bool>vis(adj.size()+1, false);
        int result = 0;

        vector<vector<int>> adjls(adj.size());
        for(int i=0; i<adj.size(); i++){
            for(int j=0; j<adj.size(); j++){
                if(i != j && adj[i][j] == 1){
                    adjls[i].push_back(j);
                }
            }
        }
        
        for(int i=0; i<adjls.size(); i++){
            if(!vis[i]){
                result++;
                dfs(i, adjls, vis);
            }
        }
        
        
        // queue<int>q;
        // for(int i=0; i<adj.size(); i++){
        //     if(!vis[i]){
        //         result++;
        //         bfs(i, adjls, vis, q);
        //     }
        // }
        return result;
    }
};