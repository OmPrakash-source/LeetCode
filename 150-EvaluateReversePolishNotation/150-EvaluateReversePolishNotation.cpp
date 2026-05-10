// Last updated: 5/10/2026, 11:53:12 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(const string &s : tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                int op2 = st.top(); st.pop();
                int op1 = st.top(); st.pop();

                if(s == "+"){
                    int res = op1 + op2;
                    st.push(res);
                }else if(s == "-"){
                    int res = op1 - op2;
                    st.push(res);
                }else if(s == "/"){
                    int res = op1 / op2;
                    st.push(res);
                }else if(s == "*"){
                    int res = op1 * op2;
                    st.push(res);
                }
            }else{
                    st.push(stoi(s));
                }
        }
        return (int) st.top();
    }
};