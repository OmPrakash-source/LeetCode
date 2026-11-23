class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt = 0, n = nums.size();

        for(int i=1; i<n; i++){
            if(nums[i-1] >= nums[i]){
                cnt += (nums[i-1] + 1) - nums[i];
                nums[i] = nums[i-1]+1;
            }
        }
        return cnt;
    }
};