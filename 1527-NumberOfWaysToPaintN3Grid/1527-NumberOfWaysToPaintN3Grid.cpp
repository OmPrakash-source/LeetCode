// Last updated: 5/10/2026, 11:47:12 PM
class Solution {
public:
    int numOfWays(int n) {
        long c2 = 6;
        long c3 = 6;
        long mod = 1e9 + 7;
        for(int i=2; i<=n; i++){
            long temp = c3;
            c3 = (2 * c2 + 2 * c3) % mod;
            c2 = (temp * 2 + 3 * c2) % mod;
        }
        return (c3+c2) % mod;
    }
};