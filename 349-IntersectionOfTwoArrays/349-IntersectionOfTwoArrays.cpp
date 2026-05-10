// Last updated: 5/10/2026, 11:51:36 PM
class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        set<int>s1(n1.begin(), n1.end());
        vector<int>ans;
        for(int x : n2){
            if(s1.find(x) != s1.end()){
                ans.push_back(x);
                s1.erase(x);
            }
        }
        return ans;
    }
};