// Last updated: 5/10/2026, 11:44:50 PM
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>result;
        for(int i=0; i<nums.size(); i++){
            bool flag= false;
            for(int x=0; x<=nums[i]; x++){
                if((x|(x+1)) == nums[i]){
                    result.push_back(x);
                    flag = true;
                    break;
                }
            }
            if(!flag) result.push_back(-1);
        }
        return result;
    }
};