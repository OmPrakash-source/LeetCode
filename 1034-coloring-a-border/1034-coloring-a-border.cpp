class Solution {
public:
    int delrow[4] = {0, -1, 0, 1};
    int delcol[4] = {-1, 0, 1, 0};

    void dfs(int row, int col, vector<vector<int>>& grid,
             vector<vector<int>>& ans, vector<vector<int>>& visited,
             int color, int currColor) {

        int n = grid.size();
        int m = grid[0].size();

        visited[row][col] = 1;

        bool isBorder = false;

        // Step 1: Check whether current cell is a border
        for(int i = 0; i < 4; i++) {
            int nr = row + delrow[i];
            int nc = col + delcol[i];

            if(nr < 0 || nc < 0 || nr >= n || nc >= m || grid[nr][nc] != currColor) {
                isBorder = true;
            }
        }

        // Step 2: Color only border cells
        if(isBorder) ans[row][col] = color;

        for(int i = 0; i < 4; i++) {
            int nr = row + delrow[i];
            int nc = col + delcol[i];

            if(nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] == currColor && !visited[nr][nc]) {

                dfs(nr, nc, grid, ans, visited, color, currColor);
            }
        }
    }

    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {

        int currColor = grid[row][col];

        vector<vector<int>> ans = grid;

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));
        dfs(row, col, grid, ans, visited, color, currColor);
        return ans;
    }
};