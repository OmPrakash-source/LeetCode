// Last updated: 5/10/2026, 11:50:56 PM
class Solution {
public:
    int recur(int index, int sum, int n, int target, vector<int>& nums, vector<vector<int>>& dp){
        if (sum > target) return 0;  // Prevent invalid access
        if (index == n) {
            return sum == target ? 1 : 0;
        }
        if (dp[index][sum] != -1) return dp[index][sum];

        int take = recur(index + 1, sum + nums[index], n, target, nums, dp);
        int not_take = recur(index + 1, sum, n, target, nums, dp);

        return dp[index][sum] = take + not_take;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        if ((target + sum) % 2 != 0 || abs(target) > sum) return 0;  // must be even and reachable
        int a = (target + sum) / 2;


        vector<vector<int>>dp(n, vector<int>(a+1, -1));
        return recur(0, 0, n, a, nums, dp);
    }
};