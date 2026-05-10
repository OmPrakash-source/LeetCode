// Last updated: 5/10/2026, 11:45:16 PM
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(nums[i-1]);
            }
        }
        int res = 0;
        for(int i : ans){
            res += i*i;
        }
        return res;
    }
};
