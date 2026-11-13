class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(char ch : s){
            if(!st.empty() && st.top().first == ch){
                st.top().second++;
            }else{
                st.push({ch, 1});
            }
            if(st.top().second == k){
                st.pop();
            }
            
        }
        string temp="";
        while(!st.empty()){
            while(st.top().second > 0){
                temp += st.top().first;
                st.top().second--;
            }
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};