class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int maxi=INT_MIN, idx1 = -1, idx2 = -1;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(nums[i] > nums[j] && (nums[j] + nums[i] == target) && maxi < nums[i]*nums[j]){
                    maxi = nums[i]*nums[j];
                    idx1 = j;
                    idx2 = i;
                }
            }
        }
        return {idx2, idx1};
    }
};