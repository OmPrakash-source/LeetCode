class Solution {
public:

    void func(int idx, vector<int>&temp, vector<int>& nums, vector<vector<int>>&ans){
        if(idx >= nums.size()){
            ans.push_back(temp);
            return;
        }
        func(idx+1, temp, nums, ans);
        temp.push_back(nums[idx]);
        func(idx+1, temp, nums, ans);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        func(0, temp, nums, ans);
        return ans;
    }
};