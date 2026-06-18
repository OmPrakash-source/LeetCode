// Last updated: 6/18/2026, 4:19:23 PM
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        return k * 1LL * (*max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end()));
    }
};