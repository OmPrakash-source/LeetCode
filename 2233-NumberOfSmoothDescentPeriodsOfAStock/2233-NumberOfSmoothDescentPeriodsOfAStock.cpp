// Last updated: 5/10/2026, 11:46:06 PM
class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
        long long count = 1;
        long long len = 1;
        for (int i = 1; i < p.size(); i++) {
            if (p[i-1] - p[i] == 1)
                len++;
            else
                len = 1;
            count += len;
        }
        return count;
    }
};


