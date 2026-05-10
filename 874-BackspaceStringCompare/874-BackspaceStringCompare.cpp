// Last updated: 5/10/2026, 11:49:48 PM
class Solution {
public:
    string halper(string s){
        stack<char>st;
        string result = "";
        for(char ch : s){
            if(ch == '#'){
                if(!st.empty())st.pop();
            }else{
            st.push(ch);
            }
        }
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;

    }
    bool backspaceCompare(string s, string t) {
        return halper(s) == halper(t);
    }
};