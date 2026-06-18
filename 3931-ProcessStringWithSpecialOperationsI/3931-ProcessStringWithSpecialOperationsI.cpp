// Last updated: 6/18/2026, 4:19:28 PM
class Solution {
public:
    string processStr(string s) {
        string result = "";
        for(char ch : s){
            if(ch == '*'){
                 if(!result.empty())
                    result.pop_back();
            }
            else if(ch == '%') reverse(result.begin(), result.end());
            else if(ch == '#') result = result + result;
            else result += ch;
        }
        return result;
    }
};