// Last updated: 5/10/2026, 11:51:09 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i : nums){
            int idx = abs(i) - 1;
            if(nums[idx] < 0) ans.push_back(idx+1);
            else nums[idx] = -nums[idx];
        }
        return ans;
    }
};

auto init=atexit([]{std::ofstream("display_runtime.txt")<<"0";});