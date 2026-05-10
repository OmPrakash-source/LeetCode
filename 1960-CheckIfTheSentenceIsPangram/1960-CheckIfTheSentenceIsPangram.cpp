// Last updated: 5/10/2026, 11:46:35 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26) return false;
        string s = "abcdefghijklmnopqrstuvwxyz";
        for(char i : s){
            bool flag = false;
            for(char j : sentence){
                if(i == j){
                    flag = true;
                }
            }
            if(!flag){
                return false;
            }
        }
        return true;
    }
};