class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int i=0, j=0, maxi = 1, n = nums.size();
        while(j < n){
            mpp[nums[j]]++;
            while(j < n && mpp[nums[j]] > k){
                mpp[nums[i]]--;
                i++;
            }
            if(j-i+1 > maxi) maxi = j-i+1;
            j++;
        }
        return maxi;
    }
};