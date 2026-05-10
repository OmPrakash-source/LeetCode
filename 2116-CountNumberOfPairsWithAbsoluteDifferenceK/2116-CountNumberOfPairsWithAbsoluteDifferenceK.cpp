// Last updated: 5/10/2026, 11:46:19 PM
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0, n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(nums[i] - nums[j]) == k) count ++;
            }
        }
        return count;
    }
};