// Last updated: 5/10/2026, 11:53:29 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         unordered_map<int,int>mpp;
        for(int i:nums)mpp[i]++;
        for(auto& it : mpp){
            if(it.second == 1) return it.first;
        }
        return -1;
    }
};