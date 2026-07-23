class Solution {
public:
    bool func(int i, vector<int>&nums){
        if (i >= nums.size()) return false;
        if(i == nums.size()-1) return true;
        // if(nums[i] == 0) return false;
        // bool take = func(i + nums[i], nums);
        // bool step = false;
        // if(nums[i] > 0){
        //     step = func(i+1, nums);
        // } 
        // return take || step;

        for(int idx = 1; idx<=nums[i]; idx++){
            if(func(idx+i, nums)) return true;
        }
        return false;
    }

    // TLE 
    bool canJump(vector<int>& nums) {
        // return func(0, nums);

        int n = nums.size();
        int maxi = 0;
        for(int i=0; i<n; i++){
            if(i > maxi) return false;
            maxi = max(maxi, i+nums[i]);
            if(maxi >= n-1)return true;
        }
        return false;
    }
};