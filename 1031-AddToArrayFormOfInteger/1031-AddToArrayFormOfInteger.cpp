// Last updated: 5/10/2026, 11:48:50 PM
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> res;
        int i = num.size() - 1;
        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];   // add current digit to k
                i--;
            }
            res.push_back(k % 10);  // last digit
            k /= 10;                // carry over
        }
        reverse(res.begin(), res.end());
        return res;
    }
};