class Solution {
public:
    vector<string> createGrid(int m, int n) {
        
        // vector<string>ans;
        // for(int i=0; i<m; i++){
        //     string s = "";
        //     for(int j=0; j<n; j++){
        //         if(i == 0 || j == n-1) s += ".";
        //         else s += "#";
        //     }
        //     ans.push_back(s);
        // }

        vector<string> grid(m, string(n, '#'));
        for (int i = 0; i < n; i++)
            grid[0][i] = '.';
        for (int i = 0; i < m; i++)
            grid[i][n - 1] = '.';
        return grid;
    }
};