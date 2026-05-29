// Last updated: 5/30/2026, 1:00:04 AM
class Solution {
public:
    int sumdig(int val){
        int sum = 0;
        while(val > 0){
                sum += val%10;
                val/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int sum = sumdig(nums[i]);
            nums[i] = sum;
            mini = min(mini, sum);
        }
        return mini;
    }
};