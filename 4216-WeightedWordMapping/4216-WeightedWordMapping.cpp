// Last updated: 6/18/2026, 4:19:20 PM
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";
        for(string &st : words){
            int sum = 0;
            for(char ch : st){
                sum += weights[ch - 'a'];
            }
            result += 'z' - (sum%26);
        }
        return result;
    }
};