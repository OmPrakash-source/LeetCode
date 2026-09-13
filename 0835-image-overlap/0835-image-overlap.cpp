class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int maxi = 0;
        int n = img1.size();
        for(int rsft = -n+1; rsft<n; rsft++){
            for(int csft= -n+1; csft<n; csft++){
                int count = 0;
                for(int i=0; i<n; i++){
                    for(int j=0; j<n; j++){
                        int nr = i + rsft;
                        int nc = j + csft;
                        if(nr >= 0 && nc >= 0 && nr < n && nc < n && img1[i][j] == 1 && img2[nr][nc] == 1){
                            count++;
                        }
                    }
                }
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};