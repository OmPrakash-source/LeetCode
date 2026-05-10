// Last updated: 5/10/2026, 11:45:05 PM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i : nums) mpp[i]++;

        int maxi = INT_MIN, count = 0;
        for(auto it : mpp){
            maxi = max(maxi,it.second);
        }
        for(auto it : mpp){
            if(it.second == maxi) count+=it.second;
        }
        return count;
    }
};