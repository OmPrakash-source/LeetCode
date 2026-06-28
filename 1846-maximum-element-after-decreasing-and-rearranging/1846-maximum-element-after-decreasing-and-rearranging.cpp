class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& nums) {
        if(nums.size() == 1) return 1;

        sort(nums.begin(), nums.end());
        nums[0] = 1;
        int maxi = INT_MIN;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] - nums[i-1] > 1){
                nums[i] = min(nums[i], nums[i-1]+1);
            }
            maxi = max(nums[i], maxi);
        }
        return maxi;
    }
};