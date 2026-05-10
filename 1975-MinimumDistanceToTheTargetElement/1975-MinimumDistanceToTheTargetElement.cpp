// Last updated: 5/10/2026, 11:46:32 PM
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mini = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                mini = min(mini, abs(i - start));
                if(mini == 0) return 0;
            }
        }
        return mini;
    }
};