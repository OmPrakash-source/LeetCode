// Last updated: 5/10/2026, 11:49:47 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=n-1, idx = 0;
        while(i < j){
            int mid = (j-i)/2 + i;
            if(nums[mid] > nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
            else if(nums[mid] < nums[mid-1]) j = mid;
            else i = mid;
        }
        return i;
    }
}; 