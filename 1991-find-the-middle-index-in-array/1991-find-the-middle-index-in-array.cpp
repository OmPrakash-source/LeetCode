class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0, n=nums.size();
        for(int i : nums) total += i;
        int lm = 0, rm = 0;
        for(int i=0; i<n; i++){
            rm = total - lm - nums[i];
            if(rm == lm) return i;
            lm += nums[i];
        }
        return -1;
    }
};