// Last updated: 5/10/2026, 11:47:07 PM
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i=0;
        while(i < nums.size()){
            if(nums[i] == 1){
                break;
            }
            i++;
        }
        int count = 0;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j] == 1){
                if(count < k) return false;
                else count = 0;
            }else count++;
        }
        return true;
    }
};