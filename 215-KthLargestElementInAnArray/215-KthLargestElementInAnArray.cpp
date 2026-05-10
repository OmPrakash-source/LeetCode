// Last updated: 5/10/2026, 11:52:25 PM
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(), greater<int>());
        return nums[k-1];
    }
};