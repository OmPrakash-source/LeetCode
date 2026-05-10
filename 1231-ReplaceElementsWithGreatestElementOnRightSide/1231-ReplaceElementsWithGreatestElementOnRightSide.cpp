// Last updated: 5/10/2026, 11:48:13 PM
class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;
        for(int i=n-1; i>=0; i--){
            int val = maxi;
            maxi = max(maxi, nums[i]);
            nums[i] = val;
        }
        return nums;
    }
};