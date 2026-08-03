class Solution {
public:
    vector<vector<int>>result;
    void func(int idx, int n, int k, vector<int>&temp){
        if(temp.size() == k){
            result.push_back(temp);
            return;
        }
        if(idx > n){
            return;
        }
        temp.push_back(idx);
        func(idx+1, n, k, temp);
        temp.pop_back();
        func(idx+1, n, k, temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        func(1, n, k, temp);
        return result;
    }
};