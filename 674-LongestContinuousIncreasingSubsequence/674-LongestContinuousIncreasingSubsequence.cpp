// Last updated: 5/10/2026, 11:50:24 PM
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int  n = nums.size();
        int count = 1, ans = 1;
        if(n <= 1) return n;
        for(int i=1; i<n; i++){
            if(nums[i] > nums[i-1]){
                count++;
                ans = max(ans,count);
            }
            else count = 1;
        }
        return ans;
    }
};