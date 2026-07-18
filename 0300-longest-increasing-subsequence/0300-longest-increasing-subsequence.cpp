class Solution {
public:
    // int func(vector<int>& nums, vector<vector<int>>&dp, int prev, int idx){
    //     if(idx == nums.size()) return 0;

    //     if(dp[idx][prev+1] != -1) return dp[idx][prev+1];

    //     int take = 0;
    //     int skip = func(nums, dp, prev, idx+1);
    //     if(prev == -1 || nums[prev] < nums[idx]){
    //         take = 1 + func(nums, dp, idx, idx+1);
    //     }
    //     return dp[idx][prev+1] = max(take, skip);
    // }
    int lengthOfLIS(vector<int>& nums1) {
        vector<int>nums2 = nums1;
        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        vector<vector<int>>dp (nums1.size()+1, vector<int>(nums2.size()+1, 0));

        int n = nums1.size();
        int m = nums2.size();

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(nums1[i-1] == nums2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }else{
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
                
            }
        }

        // vector<vector<int>>dp(nums1.size(), vector<int>(nums1.size()+1, -1));
        // return func(nums1, dp, -1, 0);
       return dp[n][m];
    }
};