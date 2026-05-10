// Last updated: 5/10/2026, 11:48:14 PM
class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        vector<int>ans;
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                count++;
                if(count%2 == 1) ans.push_back(0);
                else ans.push_back(1);
            }else if(s[i] == ')'){
                
                if(count%2 == 1) ans.push_back(0);
                else ans.push_back(1);
                count--;
            }
        }
        return ans;
    }
};