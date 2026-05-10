// Last updated: 5/10/2026, 11:44:44 PM
class Solution {
public:
    int smallestNumber(int n) {
        int res = 1;
        while(res < n)
            res = 2*res+1;
        return res;
    }
};