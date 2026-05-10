// Last updated: 5/10/2026, 11:51:43 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1)return true;
        if(n <= 0)return false;
        if(n != 1 && n%4 != 0)return false;
        return isPowerOfFour(n/4);
    }
};