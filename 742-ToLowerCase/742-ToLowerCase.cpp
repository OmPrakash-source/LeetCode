// Last updated: 5/10/2026, 11:50:12 PM
class Solution {
public:
    string toLowerCase(string s) {
        string lower = "";
        
        for(int ch : s){
            int result = 0;
            if(ch >= 65 && ch <= 90){
                result += 32 + ch;
                lower += (char)result;

            }else{
                lower += (char)ch;
            }
            
        }
        return lower;
    }
};