// Last updated: 5/10/2026, 11:52:43 PM
class Solution {
public:
    int func(int idx, vector<int>&nums, vector<int>&dp){
        if(idx == 0) return nums[idx];
        if(idx < 0) return 0;
        if(dp[idx] != -1){
            return dp[idx];
        }
        int pick =  nums[idx] + func(idx - 2, nums, dp);
        int nonpick = func(idx-1, nums, dp);
        dp[idx] =  max(pick, nonpick);
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1, -1);
        return func(nums.size()-1, nums, dp);
    }
};