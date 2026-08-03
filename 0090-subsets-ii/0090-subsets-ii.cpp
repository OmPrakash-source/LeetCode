class Solution {
public:
    void func(int idx, vector<int>&nums, vector<int>&temp, set<vector<int>>&ans){
        if(idx >= nums.size()){
            ans.insert(temp);
            return;
        }
        temp.push_back(nums[idx]);
        func(idx+1, nums, temp, ans);
        temp.pop_back();
        func(idx+1, nums, temp, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>temp;
        set<vector<int>>ans;
        vector<vector<int>>result;
        func(0, nums, temp, ans);
        for(auto &it : ans){
            result.push_back(it);
        }
        return result;
    }
};