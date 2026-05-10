// Last updated: 5/10/2026, 11:48:00 PM
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        if (nums.size() < 2) return {};
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        int mini = INT_MAX;
        for(int i=1; i<nums.size(); i++){
            mini = min(mini,abs(nums[i]-nums[i-1]));
        }
        for(int i=1; i<nums.size(); i++){
            if(abs(nums[i]-nums[i-1]) == mini){
                result.push_back({nums[i-1], nums[i]});
            }
        }
        return result;
    }
};