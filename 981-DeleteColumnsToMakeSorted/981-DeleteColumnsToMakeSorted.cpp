// Last updated: 5/10/2026, 11:49:00 PM
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int rows = strs.size();
        int cols = strs[0].size();
        int count = 0;
        for (int j = 0; j < cols; j++)        // column-wise
            for (int i = 1; i < rows; i++)     // row-wise
                if (strs[i][j] < strs[i-1][j]) {
                    count++;
                    break;                         // delete column once
                }

        return count;
    }
};
