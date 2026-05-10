// Last updated: 5/10/2026, 11:49:29 PM
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int e = 0, o = 1;
        while(e < n && o < n){
            if(nums[e]%2 == 0) e += 2;
            else if(nums[o]%2 == 1) o += 2;
            else {
                swap(nums[e],nums[o]);
                e += 2;
                o += 2;
            }
        }
        return nums;
    }
};