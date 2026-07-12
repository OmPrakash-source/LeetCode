class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy = arr;
        sort(copy.begin(), copy.end());
        int j = 1;
        unordered_map<int,int>mpp;
        for(int i : copy){
            if(mpp.count(i))continue;
            mpp[i] = j++;
        }
        j = 0;
        for(int i : arr){
            if(mpp.count(i)){
                copy[j++] = mpp[i];
            }
        }
        return copy;
    }
};