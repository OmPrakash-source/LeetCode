class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i : nums) mpp[i]++;
        for(int i : nums) if(mpp[i] == 1) return i;
        return 0;
    }
};