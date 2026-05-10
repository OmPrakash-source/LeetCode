// Last updated: 5/10/2026, 11:47:26 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n , 0);
        int j =0;
        for(int i=0; i<n;i++){
            ans[j] = nums[i];
            ans[j+1] = nums[i+n];
            j+=2;
        }
        return ans;
    }
};