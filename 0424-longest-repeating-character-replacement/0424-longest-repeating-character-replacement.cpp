class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0, j=0, n=s.size();
        int result = 0;
        unordered_map<char,int>mpp;
        int maxFreq = 0;
        while(j < n){
            mpp[s[j]]++;
            maxFreq = max(maxFreq, mpp[s[j]]);

            while ((j - i + 1) - maxFreq > k) {
                mpp[s[i]]--;
                i++;
            }
            result = max(result, j-i+1);
            j++;
        }
        return result;
    }
};