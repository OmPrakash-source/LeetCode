// Last updated: 5/10/2026, 11:44:34 PM
class Solution {
public:
    bool isvalid(string st){
        if(st.empty()) return false;
        for(char ch : st){
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_') continue;
            else return false;
        }
        return true;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& bL, vector<bool>& isActive) {
        unordered_map<string,int>mp = {
           {"electronics",0},
           {"grocery",1},
           {"pharmacy",2},
           {"restaurant",3}
        };
        vector<pair<int,string>>temp;
        for(int i=0; i<code.size();i++){
            if(isActive[i] && isvalid(code[i]) && mp.count(bL[i])){
                temp.push_back({mp[bL[i]], code[i]});
            }
        }
        vector<string>result;
        sort(temp.begin(), temp.end());
        for(auto it : temp){
            result.push_back(it.second);
        }
        return result;
    }
}; 