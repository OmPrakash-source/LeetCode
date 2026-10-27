class Solution {
public:
    vector<string> createGrid(int m, int n) {
        if(m == 1){
            string s = "";
            for(int i=0; i<n; i++){
                s += '.';
            }
            return {s};
        }
        if(n == 1){
            vector<string>ans(m, ".");
            return ans;
        }
        vector<string>ans;
        for(int i=0; i<m; i++){
            string s = "";
            for(int j=0; j<n; j++){
                if(i == 0 && j < n-1) s += ".";
                else if(j == n-1) s += ".";
                else s += "#";
            }
            ans.push_back(s);
        }
        return ans;
    }
};