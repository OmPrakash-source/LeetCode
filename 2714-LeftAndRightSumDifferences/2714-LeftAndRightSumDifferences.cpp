// Last updated: 6/6/2026, 1:55:22 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n, 0), right(n, 0);
        int pre = nums[0];
        for(int i=1; i<n; i++){
            left[i] = pre;
            pre += nums[i];
        }
        int post = nums[n-1];
        for(int i = n-2; i>=0; i--){
            right[i] = post;
            post += nums[i];
        }
        for(int i=0; i<n; i++){
            nums[i] = abs(left[i] - right[i]);
        }
        return nums;
    }
};