class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i : nums) mpp[i]++;

        vector<pair<int,int>>freq;
        for(auto it : mpp) freq.push_back({it.second, it.first});

        sort(freq.begin(), freq.end(),greater<pair<int,int>>());
        nums.erase(nums.begin(),nums.end());

        int i=0;
        while(k--){
            nums.push_back(freq[i++].second);
        }
        return nums;
    }
};