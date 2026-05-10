// Last updated: 5/10/2026, 11:50:05 PM
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = INT_MIN, smaxi = INT_MIN;

        // First pass: find maximum
        for (int x : nums) {
            maxi = max(maxi, x);
        }

        // Second pass: find second maximum
        for (int x : nums) {
            if (x != maxi) {
                smaxi = max(smaxi, x);
            }
        }

        // Third pass: find index of maximum and validate condition
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxi) {
                if(maxi >= smaxi * 2) return i;
                else return -1;
            }
        }

        return -1;
    }
};
