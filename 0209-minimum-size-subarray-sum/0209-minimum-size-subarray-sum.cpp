class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i =0,j = 0, n = nums.size(), count = INT_MAX, sum = 0;

        while(j < n){
            sum += nums[j];
            while(sum >= target){
                count = min(count, j-i+1);
                sum -= nums[i++];
            }
            j++;
        }
        return (count >= INT_MAX) ? 0 : count;
    }
};