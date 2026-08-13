class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        for(char ch : word){
            if(ch >= 'A' && ch <= 'Z') upper++;
        }
        return upper == 0 || (upper == 1 && (word[0] >= 'A' && word[0] <='Z')) || upper == word.size();
    }
};