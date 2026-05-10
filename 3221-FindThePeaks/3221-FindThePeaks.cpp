// Last updated: 5/10/2026, 11:45:06 PM
class Solution {
public:
    vector<int> findPeaks(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        if(n == 0 || n == 1 || n == 2) return ans;
        for(int i=1; i<=n-2; i++){
            if(nums[i-1] < nums[i] && nums[i] > nums[i+1]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};