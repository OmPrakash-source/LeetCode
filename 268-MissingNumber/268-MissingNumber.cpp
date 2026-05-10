// Last updated: 5/10/2026, 11:52:00 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0, vsum = 0;
        for(int i=1; i<=nums.size(); i++) sum += i;
        for(int i=0; i<nums.size(); i++){
            vsum+=nums[i];
        }
        return sum - vsum;
    }
};