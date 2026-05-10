// Last updated: 5/10/2026, 11:44:45 PM
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);
        for(int i=0; i<n; i++){
            int idx = i+nums[i];
            idx %= n;
            if(idx < 0) idx += n;
            res[i] = nums[idx];
        }
        return res;
    }
};