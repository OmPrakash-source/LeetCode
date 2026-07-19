class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        int result = 0, lm = 0, rm = 0;
        int i = 0, j = n-1;
        while(i < j){
            if(nums[i] > lm) lm = nums[i];
            if(nums[j] > rm) rm = nums[j];

            int mini = min(lm, rm);
            if(nums[j] > nums[i]){
                result += mini-nums[i++];
            }else{
                result += mini-nums[j--];
            }
        }
        return result;
    }
};