class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>&ans, vector<int>&temp,int n){
        if(n == nums.size()) {
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(nums[n]);
        solve(nums, ans, temp, n + 1);
        temp.pop_back(); 

        solve(nums,ans,temp,n+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(nums, ans,temp, 0);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};