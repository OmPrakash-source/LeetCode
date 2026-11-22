class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int cnt = 1;
        int ped = points[0][1];

        int i = 1;
        while(i < points.size()){
            int cst = points[i][0];
            int ced = points[i][1];
            if(cst > ped){
                ped = ced;
                cnt++;
            }else{
                ped = min(ped, ced);
            }
            i++;
        }
        return cnt;
    }
};