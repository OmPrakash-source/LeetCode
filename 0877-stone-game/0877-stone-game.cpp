class Solution {
public:
    int func(int l, int r, vector<int>&nums, vector<vector<int>>&dp){
        if(l == r)return nums[l];
        if(dp[l][r] != -1)return dp[l][r];
        int lans = nums[l] - func(l+1, r, nums, dp);
        int rans = nums[r] - func(l, r-1, nums, dp);
        return dp[l][r] = max(lans, rans);
    }
    bool stoneGame(vector<int>& piles) {
        vector<vector<int>>dp(piles.size(), vector<int>(piles.size(), -1));
        return func(0, piles.size()-1, piles, dp) > 0;
        // return true;
    }
};