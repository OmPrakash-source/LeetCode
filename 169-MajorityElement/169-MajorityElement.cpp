// Last updated: 5/10/2026, 11:52:59 PM

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n = nums.size();
        for(int i:nums)freq[i]++;
        int maxi = 0;
        int element = -1;
        for(auto it : freq){
            if(it.second > maxi){
                maxi = it.second;
                element = it.first;
            }
            if(it.second > n/2) return it.first;
        }
        return -1;
    }
};