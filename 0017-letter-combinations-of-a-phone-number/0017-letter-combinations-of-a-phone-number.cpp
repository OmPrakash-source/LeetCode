class Solution {
public:
    void func(int idx, string op, vector<string>&ans, vector<string>&st, string &dig){
        if(idx >= dig.size()){
            ans.push_back(op);
            return;
        }

        int num = dig[idx] - '0';
        string val = st[num];
        for(int i=0; i<val.size(); i++){
            op.push_back(val[i]);
            func(idx+1, op, ans, st, dig);
            op.pop_back();
        }
    }
    vector<string> letterCombinations(string digit) {
        vector<string>ans;
        if(digit.size() == 0)return ans;
        vector<string>st = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        func(0, "", ans, st, digit);
        return ans;
    }
};