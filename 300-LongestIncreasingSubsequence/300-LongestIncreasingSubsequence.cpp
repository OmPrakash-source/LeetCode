// Last updated: 5/10/2026, 11:51:50 PM
class Solution {
public:
    int lengthOfLIS(vector<int>& nums1) {
        
        vector<int> nums2 = nums1;
        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        
        int m = nums2.size();
        int n =nums1.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(nums1[i-1] == nums2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};