// Last updated: 5/10/2026, 11:50:11 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int tar = target - '0';
        for(char ch : letters){
            int num = ch - '0';
            if(tar < num){
                return ch;
            }
        }
        return letters[0];
    }
};