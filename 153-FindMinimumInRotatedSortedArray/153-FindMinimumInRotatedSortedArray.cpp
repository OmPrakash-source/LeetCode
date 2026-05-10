// Last updated: 5/10/2026, 11:53:08 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0, end = nums.size()-1;
        int ans = INT_MAX;
        while(st <= end){
            if(nums[st] <= nums[end]){
                ans = min(nums[st], ans);
                break;
            }
            int mid = (st + end) / 2;
            if(nums[st] <= nums[mid]){
                ans = min(ans,nums[st]);
                st = mid+1;
            }else{
                ans = min(ans, nums[mid]);
                end = mid-1;
            }
        }
        return ans;
    }
};