// Last updated: 5/10/2026, 11:51:48 PM
class Solution {
public:
//O(3logn)
    bool isPowerOfThree(int n) {
        if(n == 1)return true;
        if(n<=0 || n % 3 != 0) return false;
        return isPowerOfThree(n/3);
    }
};