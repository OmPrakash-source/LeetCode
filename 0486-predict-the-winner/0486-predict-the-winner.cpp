class Solution {
public:
    int func(int l, int r, vector<int>&nums,vector<vector<int>>&dp){
        if(l > r) return 0;
        if(dp[l][r] != -1) return dp[l][r];
        int ltake = nums[l] - func(l+1, r, nums, dp);
        int rtake = nums[r] - func(l, r-1, nums, dp);

        return dp[l][r] = max(ltake, rtake);
    }
    bool predictTheWinner(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(), vector<int>(nums.size(), -1));
        return func(0, nums.size()-1, nums, dp) >= 0;
    }
};