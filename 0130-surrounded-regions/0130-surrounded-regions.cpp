class Solution {
public:
    int delr[4] = {1, 0, -1, 0};
    int delc[4] = {0, -1, 0, 1};
    void dfs(vector<vector<char>>& board, int row, int col){
        int n = board.size();
        int m = board[0].size();
        board[row][col] = 'V';
        for(int i=0; i<4; i++){
            int r = row+delr[i];
            int c = col+delc[i];
            if(r < n && c < m && r >= 0 && c >= 0 && board[r][c] == 'O'){
                // board[r][c] = 'V';
                dfs(board, r, c);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        for(int i=0; i<m; i++){
            if(board[0][i] == 'O'){
                dfs(board, 0 , i);
            }
            if(board[n-1][i] == 'O'){
                dfs(board, n-1, i);
            }
        }
        for(int i=0; i<n; i++){
            if(board[i][0] == 'O'){
                dfs(board, i , 0);
            }
            if(board[i][m-1] == 'O'){
                dfs(board, i, m-1);
            }
        }

        for(int i=0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(board[i][j] == 'V'){
                    board[i][j] = 'O';
                }
            }
        }

    }
};