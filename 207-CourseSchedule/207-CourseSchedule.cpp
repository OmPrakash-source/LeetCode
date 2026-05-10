// Last updated: 5/10/2026, 11:52:29 PM
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        if(n == 0)return true;
        vector<vector<int>> adj(numCourses);
        for(auto &p : prerequisites){
            adj[p[1]].push_back(p[0]);
        }

        vector<int> indeg(numCourses, 0);
        queue<int>q;
        for(int i=0; i<numCourses; i++){
            for(int v : adj[i]){
                indeg[v]++;
            }
        }
        for(int i=0; i<numCourses; i++){
            if(indeg[i] == 0) q.push(i);
        }
        int count = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            for(int v : adj[node]){
                indeg[v]--;
                if(indeg[v] == 0)q.push(v);
            }
        }
        return count == numCourses?true:false;
    }
};