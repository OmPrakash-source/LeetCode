class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int i=0, j=0, n=s.size(), maxi = 0;

        while(j < n){
            mpp[s[j]]++;
            while(j-i+1 > mpp.size()){
                mpp[s[i]]--;
                if(mpp[s[i]] == 0) mpp.erase(s[i]);
                i++;
            }
            if(mpp.size() == j-i+1){
                maxi = max(j-i+1, maxi);
            }
            j++;
        }
        return maxi;
    }
};