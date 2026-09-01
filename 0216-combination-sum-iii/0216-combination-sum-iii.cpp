class Solution {
public:
    void func(int idx, int k, int n, vector<int>&temp, vector<vector<int>> &result){
        if (k == 0) {
            if (n == 0)
                result.push_back(temp);
            return;
        }
        if (idx > 9 || n <= 0) return;

        temp.push_back(idx);
        // if(n-idx > -1)
        func(idx+1, k-1, n-idx, temp, result);
        temp.pop_back();
        func(idx+1, k, n, temp, result);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>result;
        vector<int>temp;

        func(1, k, n, temp, result);
        return result;
    }
};