// Last updated: 5/10/2026, 11:51:35 PM
class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        int n = a.size(); int m = b.size();
        vector<int>ans;
        vector<bool>check(m,false);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!check[j] && a[i] == b[j]){
                    check[j] = true;
                    ans.push_back(a[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
 