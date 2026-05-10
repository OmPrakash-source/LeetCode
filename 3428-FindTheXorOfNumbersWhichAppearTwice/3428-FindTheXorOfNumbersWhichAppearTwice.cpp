// Last updated: 5/10/2026, 11:44:57 PM
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]) ans ^= nums[i];
        }
        return ans;
    }
};