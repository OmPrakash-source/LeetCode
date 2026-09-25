class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string str = "";
        unordered_map<string, string>mpp;

        int n = s.size(), i=0;

        for(int i=0; i<knowledge.size(); i++){
            mpp[knowledge[i][0]] = knowledge[i][1];
        }
        while(i < n){
            if(s[i] == '('){
                string temp = "";
                i++;
                while(i < n && s[i] != ')'){
                    temp += s[i];
                    i++;
                }
                if(mpp.find(temp) != mpp.end()) str += mpp[temp];
                else str += '?';
            }else{
                str += s[i];
            }
            i++;
        }
        return str;
    }
};