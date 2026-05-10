// Last updated: 5/10/2026, 11:51:42 PM
class Solution {
public:
    void rev(vector<char>&s, int i ,int j){
       while( i < j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--; 
       }
    }
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size()-1;
        rev(s,i,j);
    }
};