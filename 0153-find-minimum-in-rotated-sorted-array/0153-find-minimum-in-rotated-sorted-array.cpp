class Solution {
public:
    int findMin(vector<int>& nums) {
       int i=0, j = nums.size()-1;
       int mini = INT_MAX;
       while(i <= j){
            int mid = i+(j-i)/2;
            mini = min(mini, nums[mid]);
            if(nums[mid] < nums[j]) j = mid-1;
            else i = mid+1;
       } 
       return mini;
    }
};