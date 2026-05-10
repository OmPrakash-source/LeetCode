// Last updated: 5/10/2026, 11:49:56 PM
class Solution {
public:
    string customSortString(string order, string s) {
        vector<bool>vis(s.size(), false);
        string ans = "";
        for(int i=0; i<order.size(); i++){
            for(int j=0; j<s.size(); j++){
                if(order[i] == s[j]){
                    ans += s[j];
                    vis[j] = true;
                }
            }
        }
        for(int i=0; i<vis.size(); i++){
            if(vis[i] == false){
                ans+=s[i];
            }
        }
        return ans;
    }
};