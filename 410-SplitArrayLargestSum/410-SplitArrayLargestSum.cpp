// Last updated: 5/10/2026, 11:51:22 PM
class Solution {
public:
    bool check(vector<int>&arr, int split, int k){
        int result = 0, allow = 1;
        for(int i : arr){
            if(i + result > split){
                allow++;
                result = i;
            }else{
                result += i;
            }
        }
        return allow <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int end = 0, st = INT_MIN;
        if(nums.size() < k) return -1;
        for(int i:nums){
            end += i;
            st = max(st, i);
        }
        int  ans = 0;
        while(st <= end){
            int mid = (st + end) / 2;
            if(check(nums,mid,k)){
                ans = mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return ans;
    }
};