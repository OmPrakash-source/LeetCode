class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0, j = 0, n = nums.size();
        int count = 0;
        long long prod = 1;
        while(j < n){
            prod *= nums[j];
            while(i < n && prod >= k){
                prod /= nums[i];
                i++;
            }
            count += j-i+1;
            j++;
        }
        return count;
    }
};