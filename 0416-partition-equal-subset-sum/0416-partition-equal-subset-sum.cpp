class Solution {
public:
    bool dfs(int idx, int target, vector<int>&nums, vector<vector<int>>&dp){
        if(target == 0) return true;
        if(idx == 0) return nums[idx] == target;
        if(idx < 0) return false;

        if(dp[idx][target] != -1) return dp[idx][target];
        bool skip = dfs(idx-1, target, nums, dp);
        bool take = false;

        if(nums[idx] <= target){
            take = dfs(idx-1, target-nums[idx], nums, dp);
        }
        return dp[idx][target] = take || skip;
    }
    bool canPartition(vector<int>& nums) {
        long long sum = 0;
        for(int i:nums) sum += i;
        if(sum % 2 != 0) return false;
        int n = nums.size();
        int target = sum/2;
        vector<vector<int>>dp(n, vector<int>(target + 1, -1));

        return dfs(n-1, target, nums, dp);

    }
};