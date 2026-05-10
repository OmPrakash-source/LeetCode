// Last updated: 5/10/2026, 11:47:33 PM
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i:arr) mpp[i]++;
        int maxi = INT_MIN;
        for(auto it : mpp){
            if(it.first == it.second){
                maxi = max(maxi, it.first);
            }
        }
        return (maxi != INT_MIN)?maxi:-1;;
    }
};