// Last updated: 5/10/2026, 11:51:02 PM
class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long count = 0; 
        int mini = INT_MAX;
        for(int i : nums) mini = min(mini, i);
        for(int i:nums) count += (i - mini);
        return (int)count;
    }
};