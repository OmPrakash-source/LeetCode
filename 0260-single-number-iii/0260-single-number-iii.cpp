class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int>mpp;
        for(int &i : nums) mpp[i]++;
        vector<int>answer;
        for(auto &it : mpp){
            if(it.second == 1) answer.push_back(it.first);
        }
        return answer;
    }
};