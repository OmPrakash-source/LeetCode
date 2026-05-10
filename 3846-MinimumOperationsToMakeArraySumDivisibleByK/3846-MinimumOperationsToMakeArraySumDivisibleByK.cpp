// Last updated: 5/10/2026, 11:44:37 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int i : nums) sum += i;
        return sum % k;
    }
};