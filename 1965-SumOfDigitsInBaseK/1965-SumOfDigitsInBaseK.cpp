// Last updated: 5/10/2026, 11:46:34 PM
class Solution {
public:
    int sumBase(int n, int k) {

        int diff = 0, rem = 0, res = 0;
        while(n > 0){
            res = res*10 + (n%k);
            diff = n / k;
            n = diff;
        }
        int sum = 0;
        while(res > 0){
            sum += (res%10);
            res /= 10;
        }
        return sum;
    }
};