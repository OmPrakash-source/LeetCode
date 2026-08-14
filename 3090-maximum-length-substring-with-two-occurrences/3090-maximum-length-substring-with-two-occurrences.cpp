class Solution {
public:
    int maximumLengthSubstring(string s) {
        int count = 0;
        int i=0, j=0, n=s.size();
        unordered_map<char, int>mpp;
        while(j < n){
            mpp[s[j]]++;
            while(mpp[s[j]] > 2){
                mpp[s[i]]--;
                i++;
            }
            count = max(count, j-i+1);
            j++;
        }
        return count;
    }
};