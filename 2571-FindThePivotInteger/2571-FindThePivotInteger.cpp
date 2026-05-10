// Last updated: 5/10/2026, 11:45:37 PM
class Solution {
public:
    int pivotInteger(int n) {
        int total = n * (n+1)/2;
        int left = 0;
        for(int i = 1; i <= n; i++){
            left += i;
            if(left == total) return i;
            total -= i;
        } 
        return -1;
    }
};