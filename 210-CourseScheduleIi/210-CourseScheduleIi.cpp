// Last updated: 5/10/2026, 11:52:28 PM
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indeg(numCourses,0);
        vector<int>topo;
        queue<int>q;
            for(auto &v : prerequisites){
                adj[v[1]].push_back(v[0]);
                indeg[v[0]]++;
            }
        
        for(int i=0; i<numCourses; i++){
            if(indeg[i] == 0) q.push(i);
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(int v : adj[node]){
                indeg[v]--;
                if(indeg[v] == 0) q.push(v);
            }
        }
        return topo.size() == numCourses ? topo : vector<int>{};
    }
};