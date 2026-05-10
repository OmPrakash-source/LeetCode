// Last updated: 5/10/2026, 11:46:02 PM
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            bool leftOK = (i == 0) || (nums[i] - nums[i-1] > 1 && nums[i] != nums[i-1]);
            bool rightOK = (i == n-1) || (nums[i+1] - nums[i] > 1 && nums[i] != nums[i+1]);

            if(leftOK && rightOK) ans.push_back(nums[i]);
        }

        return ans;
    }
};