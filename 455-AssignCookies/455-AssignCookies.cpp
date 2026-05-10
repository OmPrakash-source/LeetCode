// Last updated: 5/10/2026, 11:50:58 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()); // g = [7,8,9,10]
        sort(s.begin(), s.end()); // s = [5,6,7,8]

        int i = 0, j = 0;
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                i++; j++;
            } else {
                j++;
            }
        }
        return i;
    }
};