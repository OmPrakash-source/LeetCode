// Last updated: 5/10/2026, 11:45:58 PM
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        // if(k <= 1) return 0;
        int count = 0, n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] == nums[j] && (i*j) % k == 0) count++;
            }
        }
        return count;
    }
};