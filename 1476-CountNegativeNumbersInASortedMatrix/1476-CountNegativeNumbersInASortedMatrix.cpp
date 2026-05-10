// Last updated: 5/10/2026, 11:47:56 PM
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] < 0) count++;
            }
        }
        return count;
    }
};