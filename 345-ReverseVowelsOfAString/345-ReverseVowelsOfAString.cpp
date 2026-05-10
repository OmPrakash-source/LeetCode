// Last updated: 5/10/2026, 11:51:41 PM
class Solution {
public:
    bool isVowle(char ch){
        return (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U');
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i < j){
            if(!isVowle(s[i])) i++;
            else if(!isVowle(s[j])) j--;
            else {
                swap(s[i++],s[j--]);
                // i++;
                // j--;
            }
        }
        return s;
    }
};