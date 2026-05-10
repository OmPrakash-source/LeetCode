// Last updated: 5/10/2026, 11:50:38 PM
class Solution {
public:
    int distributeCandies(vector<int>& ct) {
        unordered_map<int,int>mpp;
        for(int i:ct) mpp[i]++;
        int n = min(mpp.size(), ct.size()/2);
        return n;
    }
};