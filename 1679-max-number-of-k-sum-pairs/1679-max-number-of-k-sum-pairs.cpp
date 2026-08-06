class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            int diff = k - nums[i];
            if (mpp[diff] > 0) {
                count++;
                mpp[diff]--;
            }else mpp[nums[i]]++;
        }
        return count;
    }
};