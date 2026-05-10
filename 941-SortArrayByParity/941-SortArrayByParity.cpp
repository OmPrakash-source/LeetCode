// Last updated: 5/10/2026, 11:49:40 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return nums;
    }
};