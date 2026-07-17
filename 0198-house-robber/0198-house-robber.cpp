class Solution {
public:
    int func(vector<int>&nums, vector<int>&dp, int idx){
        if (idx >= nums.size()) return 0;
        if(dp[idx] != -1) return dp[idx];
        return dp[idx] = max(func(nums, dp, idx+1), nums[idx] + func(nums, dp, idx+2));
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        return func(nums,dp, 0);
    }
};