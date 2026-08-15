class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int result = 0;
        bool hasNonZero = false;
        int n = nums.size();

        for (int x : nums) {
            result ^= x;
            if (x != 0)
                hasNonZero = true;
        }

        if (result != 0)
            return n;

        if (hasNonZero)
            return n - 1;

        return 0;
    }
};
