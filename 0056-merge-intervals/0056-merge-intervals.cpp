class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> result;

        int pf = intervals[0][0];
        int pb = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            int cf = intervals[i][0];
            int cb = intervals[i][1];

            if (cf <= pb) {
                pf = min(pf, cf);
                pb = max(pb, cb);
            } else {
                result.push_back({pf, pb});
                pf = cf;
                pb = cb;
            }
        }

        result.push_back({pf, pb});

        return result;
    }
};