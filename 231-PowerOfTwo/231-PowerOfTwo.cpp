// Last updated: 5/10/2026, 11:52:15 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        if(n <= 0 || n%2 != 0) return false;
        return isPowerOfTwo(n/2);
    }
};