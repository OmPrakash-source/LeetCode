// Last updated: 5/10/2026, 11:52:03 PM
class Solution {
public:
    int addDigits(int n) {
        // if(n <= 9) return n;
        // while(n > 0){
        //     int lastdig = n%10;
        //     n = n/10;
        //     n += lastdig; 
        //     if(n <= 9) break;
        // }
        // return n;
        if(n == 0) return 0;
        return 1+ (n-1) % 9;
    }
};