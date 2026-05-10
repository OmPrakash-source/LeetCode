// Last updated: 5/10/2026, 11:53:04 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans = INT_MIN;
        int idx = 0;
        int n = nums.size();
        int st = 1, end = nums.size()-2;
        if(nums.size() == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
        while(st <= end){
            int mid = (st + end) / 2;
            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) return mid;
            else if(nums[mid] > nums[mid-1]) st = mid + 1;
            else end = mid -1;
        }
        return -1;
    }
};