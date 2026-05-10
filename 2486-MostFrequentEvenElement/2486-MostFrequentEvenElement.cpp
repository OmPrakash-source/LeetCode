// Last updated: 5/10/2026, 11:45:47 PM
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i : nums){
            if(i%2 == 0) mpp[i]++;
        }
        int maxi = 0;
        int res = -1;

        for(auto &it : mpp){
            if(it.second > maxi){
                maxi = it.second;
                res = it.first;
            }else if(it.second == maxi){
                if(res > it.first){
                    maxi = it.second;
                    res = it.first;
                }
            }
        }
    return res;
    }
};