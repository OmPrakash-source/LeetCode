// Last updated: 5/10/2026, 11:46:47 PM
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        // Step 1: get total sum
        int totalSum = 0;
        for (int i = 0; i < n; i++)
            totalSum += nums[i];

        // Step 2: iterate with running leftSum
        int leftSum = 0;
        for (int i = 0; i < n; i++) {
            int rightSum = totalSum - leftSum - nums[i];

            int leftCount  = i;
            int rightCount = n - 1 - i;

            result[i] = (i * nums[i] - leftSum) + (rightSum - rightCount * nums[i]);

            leftSum += nums[i];  // grow leftSum for next iteration
        }

        return result;
    }
};