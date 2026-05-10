// Last updated: 5/10/2026, 11:44:27 PM
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i : nums){
            maxi = max(i,maxi);
        }
        int count = 0;
        for(int i : nums){
            count += (maxi - i);
        }
        return count;
    }
};