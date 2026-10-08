class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        stack<char>st;
        for(const char &ch : s){
            if(ch == '('){
                if(!st.empty()){
                    str += st.top();
                }
                st.push(ch);
            }
            else{
                st.pop();
                if(!st.empty()){
                    str +=ch;
                }
            }
        }
        return str;
    }
};