// Last updated: 5/10/2026, 11:49:38 PM
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int>mpp;
        for(int i : nums) mpp[i]++;
        vector<int>vec;
        for(auto &it : mpp){
            while(it.second > 0){
                vec.push_back(it.first);
                mpp[it.first]--;
            }
            if(mpp[it.first] == 0)mpp.erase(it.first);
        }
        return vec;
    }
};