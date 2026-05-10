// Last updated: 5/10/2026, 11:48:16 PM
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>count(1001,0);
        vector<int>res;
        for(int x : arr1) count[x]++;
        for(int x : arr2)
            while(count[x]-- > 0)
                res.push_back(x);
        for(int i=0; i<=1000; i++)
            while(count[i]-- > 0)
                res.push_back(i);
            
        return res;
    }
};