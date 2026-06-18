// Last updated: 6/18/2026, 4:20:42 PM
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin(), nums.end());

    int n = nums.size();
    int sum = 0;

    for (int i = n - 1; i >= 0; i -= 3) {
        sum += nums[i];           // largest in current group

        if (i - 1 >= 0)
            sum += nums[i - 1];   // second largest in current group
    }

    return sum;
    }
};