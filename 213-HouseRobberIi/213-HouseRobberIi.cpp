// Last updated: 5/10/2026, 11:52:26 PM
class Solution {
public:
    int func(int idx, vector<int>&nums, vector<int>&dp){
        if(idx == 0) return nums[0];
        if(idx < 0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int pick = nums[idx] + func(idx -2, nums,dp);
        int skip = func(idx-1, nums,dp);
        return dp[idx] = max(pick, skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int>nums1, nums2;
        for(int i=0; i<n; i++){
            if(i != 0) nums1.push_back(nums[i]);
            if(i != n-1) nums2.push_back(nums[i]);
        }
        vector<int>dp(n, -1);
        int ans1 = func(nums1.size()-1, nums1,dp);
        fill(dp.begin(), dp.end(), -1);
        int ans2 = func(nums2.size()-1, nums2,dp);
        return max(ans1 ,ans2);
    }
};