// Last updated: 5/10/2026, 11:53:35 PM
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string>path;
        vector<vector<string>> res;
        func(0,s,path,res);
        return res;
    }
    bool ispal(int st,string s,int ed){
        while(st<=ed){
            if(s[st++] != s[ed--]){
                return false;
            }
        }
        return true;
    }
    void func(int idx, string s, vector<string>&path, vector<vector<string>> &res){
        if(idx == s.size()){
            res.push_back(path);
            return;
        }
        for(int i=idx;i<s.size();++i){
            if(ispal(idx,s,i)){
                path.push_back(s.substr(idx,i-idx+1));
                func(i+1,s,path,res);
                path.pop_back();
            }
        }
    }
    
};