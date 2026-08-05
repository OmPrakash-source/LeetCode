class Solution {
public:
    bool isVowle(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<char,int>mpp;
        for(char &ch : s) mpp[ch]++;
        int maxiv = 0, maxic = 0;
        for(auto &it : mpp){
            int ch = it.first;
            int freq = it.second;
            if(isVowle(ch) && maxiv < freq) maxiv = freq;
            if(!isVowle(ch) && maxic < freq) maxic = freq;
        }
        return maxiv + maxic;
    }
};