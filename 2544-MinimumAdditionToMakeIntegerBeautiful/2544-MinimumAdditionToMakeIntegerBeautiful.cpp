// Last updated: 5/19/2026, 3:38:55 PM
class Solution {
public:
    
    long long digitSum(long long x) {
        long long sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    long long makeIntegerBeautiful(long long n, int target) {
        long long original = n;
        long long base = 1;
        while (digitSum(n) > target) {
            long long digit = (n / base) % 10; //find a last digit with skip all last 0's
            long long add = (10 - digit) % 10; // find what we add to make it closer to *10
            n += add * base;
            base *= 10;
        }
        return n - original;
        
        // long long temp = n;

        // for(long long i = 1; i < n; i++) {
        //     long long num = temp;

        //     long long sum = 0;

        //     while(num > 0) {
        //         sum += num % 10;
        //         num /= 10;
        //     }
        //     if(sum <= target)
        //         return i - 1;

        //     temp = n + i;
        // }

        // return 0;
    }
};