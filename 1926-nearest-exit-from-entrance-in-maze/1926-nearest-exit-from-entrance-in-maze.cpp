class Solution {
public:
    int delr[4] = {0, -1, 0, 1};
    int delc[4] = {-1, 0, 1, 0};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size();
        int m = maze[0].size();

        queue<pair<pair<int,int>, int>>q;
        int er = entrance[0];
        int ec = entrance[1];
        q.push({{er, ec}, 0});
        maze[er][ec] = '+';
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int cnt =  q.front().second;
            q.pop();
            if(cnt > 0 && (r == 0 || c == 0 || r == n-1 || c == m-1))
                return cnt;

            for(int i=0; i<4; i++){
                int nr = delr[i]+r;
                int nc = delc[i]+c;
                if(nr >= 0 && nc >= 0 && nr < n && nc < m && maze[nr][nc] == '.'){
                    maze[nr][nc] = '+';
                    q.push({{nr, nc}, cnt+1});
                }
            }
        }
        return -1;
    }
};