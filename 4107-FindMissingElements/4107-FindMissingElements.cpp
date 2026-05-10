// Last updated: 5/10/2026, 11:44:25 PM

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int low = *min_element(nums.begin(), nums.end());
        int high = *max_element(nums.begin(), nums.end());
        
        unordered_set<int> seen(nums.begin(), nums.end());
        vector<int> ans;
        
        for (int i = low; i <= high; i++) {
            if (!seen.count(i)) ans.push_back(i);
        }
        return ans;
    }
};
