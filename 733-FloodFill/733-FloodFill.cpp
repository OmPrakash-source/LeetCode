// Last updated: 5/10/2026, 11:50:14 PM
class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans, int row, int col,int delrow[],int delcol[], int color, int el){
        
        int n = image.size();
        int m = image[0].size();
        ans[row][col] = color;
        for(int i=0;i<4;i++){
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            if(ncol < m && nrow < n && nrow >= 0 && ncol >= 0 &&image[nrow][ncol] == el && ans[nrow][ncol] != color){
                dfs(image,ans,nrow,ncol,delrow,delcol,color,el);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        vector<vector<int>>ans = image;
        int el = image[sr][sc];
        if (el == color) return image;
        
        dfs(image,ans,sr,sc,delrow,delcol,color, el);
        return ans;
    }
};