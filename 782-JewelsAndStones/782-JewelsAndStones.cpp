// Last updated: 5/10/2026, 11:50:02 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mpp;
        for(char ch : stones){
            mpp[ch]++;
        }
        int result = 0;
        for(char ch : jewels){
            if(mpp.find(ch) != mpp.end()){
                result += mpp[ch];
            }
        }
        return result;
    }
};