class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> first;
        first[0] = -1;

        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum % k;

            if (first.count(rem)) {
                if (i - first[rem] >= 2)
                    return true;
            } else {
                first[rem] = i;
            }
        }

        return false;
    }
};