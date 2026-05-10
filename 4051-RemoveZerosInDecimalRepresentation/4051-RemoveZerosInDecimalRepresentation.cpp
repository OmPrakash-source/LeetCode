// Last updated: 5/10/2026, 11:44:22 PM
class Solution {
public:
    long long removeZeros(long long n) {
        long long res = 0, multi = 1;
        while(n > 0){
            int last_dig = n % 10;
            if(last_dig){
                res += last_dig * multi;
                multi *= 10;
            }
            n /= 10;
        }
        return res;
    }
};