// Last updated: 5/10/2026, 11:44:54 PM
class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if(!st.empty() && ch <= '9' && ch >= '0'){
                st.pop();
            }else{
                st.push(ch);
            }
        }
        string res = "";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};