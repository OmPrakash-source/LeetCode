// Last updated: 6/18/2026, 4:20:46 PM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        for(int i : nums) if(i < pivot) ans.push_back(i);
        for(int i : nums) if(i == pivot) ans.push_back(i);
        for(int i : nums) if(i > pivot) ans.push_back(i);
        return ans;
    }
};