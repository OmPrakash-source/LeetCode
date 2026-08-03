class Solution {
public:
    
    void func(int idx, int n, int k, vector<int>&temp, vector<vector<int>> &result){
        if(temp.size() == k){
            result.push_back(temp);
            return;
        }
        if(idx > n){
            return;
        }
        temp.push_back(idx);
        func(idx+1, n, k, temp, result);
        temp.pop_back();
        func(idx+1, n, k, temp, result);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>>result;
        func(1, n, k, temp, result);
        return result;
    }
};