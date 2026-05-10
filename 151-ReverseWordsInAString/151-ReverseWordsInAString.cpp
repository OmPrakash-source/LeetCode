// Last updated: 5/10/2026, 11:53:11 PM
class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string str = "";
        for(char ch : s){
            if(ch == ' '){
                if(!str.empty()){
                    st.push(str);
                    str = "";
                }     
            }else{
                str += ch;
            }
        }
        if(!str.empty()){
            st.push(str);
            str = "";
        }
        str = "";
        while(!st.empty()){
            if(st.size() == 1){
                str += st.top();
                st.pop();
            }else{
                str += st.top() + " ";
                st.pop();
            }
        }
        return str;
    }
};