// Last updated: 5/10/2026, 11:51:08 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
                maxcount = max(maxcount, count);
            }else{
                count = 0;
            }
        }
        return maxcount;
    }
};