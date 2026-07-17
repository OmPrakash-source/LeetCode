class Solution {
public:
    int delr[4] = {0, -1, 0, 1};
    int delc[4] = {-1, 0, 1, 0};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int target = image[sr][sc];
        if (target == color) return image;
        
        image[sr][sc] = color;
        int n = image.size();
        int m = image[0].size();
        queue<pair<int,int>>q;
        q.push({sr, sc});

        while(!q.empty()){
            auto[r, c] = q.front();
            q.pop();
            for(int i=0; i<4; i++){
                int nr = r + delr[i];
                int nc = c + delc[i];
                if(nr >= 0 && nc >= 0 && nr < n && nc < m && image[nr][nc] == target){
                    image[nr][nc] = color;
                    q.push({nr, nc});
                }
            }
        }
        return image;
    }
};