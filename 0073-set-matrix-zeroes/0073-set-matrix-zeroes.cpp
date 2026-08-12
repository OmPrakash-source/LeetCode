class Solution {
public:
    int delr[4] = {1, 0, -1, 0};
    int delc[4] = {0, -1, 0, 1};
    void func(int r, int c, vector<vector<int>>& nums){
        int n = nums.size();
        int m = nums[0].size();
        nums[r][c] = 0;
        for(int i=0; i<4; i++){
            int nr = r+delr[i];
            int nc = c+delc[i];
            if(nr >= 0 && nc >= 0 && nr < n && nc < m && nums[nr][nc] != 0){
                func(nr, nc, nums);
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>>nums;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    nums.push_back({i, j});
                }
            }
        }

        for(auto &it : nums){
            int r = it.first;
            int c = it.second;
            for(int i=0; i<m; i++) matrix[r][i] = 0;
            for(int i=0; i<n; i++) matrix[i][c] = 0;
        }
    }
};