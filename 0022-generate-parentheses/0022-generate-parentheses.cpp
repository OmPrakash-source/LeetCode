class Solution {
public:
    void func(int open, int close, string &op, vector<string>&res){
        if(open == 0 && close == 0){
            res.push_back(op);
            return;
        }
        if(open != 0){
            op.push_back('(');
            func(open - 1, close, op, res);
            op.pop_back();
        }
        if(close > open){
            op.push_back(')');
            func(open, close-1, op, res);
            op.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string track = "";
        func(n,n,track,ans);
        return ans;
    }
};