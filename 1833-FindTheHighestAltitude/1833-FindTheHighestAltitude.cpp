// Last updated: 6/22/2026, 1:20:02 PM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0, val = 0;
        for(int i : gain){
            val += i;
            maxi = max(maxi, val);
        }
        return maxi;
    }
};