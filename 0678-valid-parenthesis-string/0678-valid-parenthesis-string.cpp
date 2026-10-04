class Solution {
public:
    bool checkValidString(string s) {
        // stack<char>st;
        // int cnt = 0;
        // for(const char &ch : s){
        //     if(!st.empty() && ch == '('){
        //         if(st.top() == '*'){
        //             st.pop();
        //         }else{
        //             st.push(ch);
        //         }
        //     }else if(!st.empty() && ch == ')'){
        //         if(st.top() == '*' || st.top() == '('){
        //             st.pop();
        //         }else{
        //             st.push(ch);
        //         }
        //     }else if(ch == '*'){
        //         cnt++;
        //     }else{
        //         st.push(ch);
        //     }
        // }
        // if(st.size() <= cnt) return true;
        // if(st.size() > cnt) return false;

        // return st.empty();

        stack<int>op;
        stack<int>sp;

        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if(ch == '(') op.push(i);
            else if(ch == '*') sp.push(i);
            else{
                if(!op.empty())
                    op.pop();
                else if(!sp.empty())
                    sp.pop();
                else
                    return false;
            }
        }
        while(!op.empty() && !sp.empty()){
            if(op.top() < sp.top()){
                op.pop(); sp.pop();
            }else return  false;
        }
        return op.empty();
        
    }
};