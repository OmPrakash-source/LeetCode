// Last updated: 5/10/2026, 11:45:12 PM
class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums[0];
        for(int i : nums) n = max(n, i);
        if (nums.size() != n + 1) return false;
        
        unordered_map<int, int> freq;
        for (int x : nums) freq[x]++;
        
        // n must appear exactly twice
        if (freq[n] != 2) return false;
        
        // 1 to n-1 must appear exactly once
        for (int i = 1; i < n; i++) {
            if (freq[i] != 1) return false;
        }
        
        return true;
    }
};