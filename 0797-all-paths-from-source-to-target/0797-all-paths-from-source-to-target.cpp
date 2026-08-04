class Solution {
public:
    void func(int idx, vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>&temp){
        temp.push_back(idx);
        if(idx == graph.size()-1){
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        for(auto &it : graph[idx]){
            func(it, graph, ans, temp);
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        int m=graph[0].size();
        vector<vector<int>>ans;
        vector<int>temp;
        func(0, graph, ans, temp);
    return ans;
    }
};