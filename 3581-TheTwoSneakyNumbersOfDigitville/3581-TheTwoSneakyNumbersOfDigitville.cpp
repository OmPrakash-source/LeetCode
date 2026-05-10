// Last updated: 5/10/2026, 11:44:51 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>mpp;
         vector<int>ans;
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] == nums[i]){
                ans.push_back(nums[i]);
            }
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};