class Solution {
public:
    int delr[4] = {-1, 0, 1, 0};
    int delc[4] = {0, 1, 0, -1};
    void dfs(int r, int c, vector<vector<char>>&board){
        int n=board.size();
        int m=board[0].size(); 
        board[r][c] = '.';
        for(int i=0; i<4; i++){
            int nr = delr[i] + r;
            int nc = delc[i] + c;;
            if(nr >= 0 && nc >= 0 && nr < n && nc < m && board[nr][nc] == 'X'){
                dfs(nr, nc, board);
            }
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j] == 'X'){
                    count++;
                    dfs(i, j, board);
                }
            }
        }
        return count;
    }
};