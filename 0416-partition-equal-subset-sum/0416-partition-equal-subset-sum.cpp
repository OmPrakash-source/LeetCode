class Solution {
public:
    bool func(int idx, int target, vector<int>& nums, vector<vector<int>> &dp){
        if(target == 0) return true;
        if(idx == 0) return nums[idx] == target;
        if(dp[idx][target] != -1) return dp[idx][target];
        bool take = false;
        if(target >= nums[idx]) take = func(idx - 1, target - nums[idx], nums, dp);

        return dp[idx][target] = take || func(idx-1, target, nums, dp);
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i : nums)sum += i;
        if(sum % 2 != 0) return false;
        vector<vector<int>> dp(nums.size(), vector<int>(sum/2 + 1, -1));
        

        return func(nums.size()-1, sum/2, nums, dp);
    }
};