class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>result(seq.size(), 0);
        // stack<char>st;
        // for(char &ch : seq){
        //     if(ch =='('){
        //         if(st.empty()) result.push_back(0);
        //         else result.push_back(st.size());
        //         st.push(ch);
        //     }else{
        //         st.pop();
        //         result.push_back(st.size());
        //     }
        // }
        // return result;
        int cnt = 0, i = 0;
        for(const char &ch : seq){
            if(ch == '('){
                cnt++;
                if(cnt%2 == 1) result[i] = 0;
                else result[i] = 1;
            }else{
                if(cnt%2 == 1) result[i] = 0;
                else result[i] = 1;
                cnt--;
            }
            i++;
        }
        return result;
    }
};