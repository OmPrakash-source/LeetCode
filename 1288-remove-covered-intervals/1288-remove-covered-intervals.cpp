class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            if (a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0] < b[0];
        });
        int st = intervals[0][0], ed = intervals[0][1];
        int i = 0;
        for(auto &it : intervals){
            int cst = it[0];
            int ced = it[1];

            if(i!=0 && st <= cst && ed >= ced){
                continue;
            }else{
                st = cst;
                ed = ced;
                i++;
            }
        }
        return i;
    }
};