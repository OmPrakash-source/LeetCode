class Solution {
public:
    int func(vector<int>&nums, vector<int>&dp, int idx){
        if(idx < 0) return 0;
        if(idx == 0) return nums[idx];
        if(dp[idx] != -1) return dp[idx];
        return dp[idx] = max(func(nums, dp, idx-1), nums[idx] + func(nums, dp, idx-2));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int>nums1, nums2;
        for(int i=0; i<n; i++){
            if(i != 0) nums1.push_back(nums[i]);
            if(i != n-1) nums2.push_back(nums[i]);
        }
        vector<int>dp(nums.size(), -1);
        int case1 = func(nums1, dp, nums1.size()-1);
        fill(dp.begin(), dp.end(), -1);
        int case2 = func(nums2, dp, nums2.size()-1);
        return max(case1, case2);
    }
};