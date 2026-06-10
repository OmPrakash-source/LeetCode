// Last updated: 6/10/2026, 11:09:12 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        for(int i=0; i<n; i++){
7            for(int j=0; j<m; j++){
8                if(matrix[i][j] == target) return true;
9            }
10        }
11        return false;
12    }
13};