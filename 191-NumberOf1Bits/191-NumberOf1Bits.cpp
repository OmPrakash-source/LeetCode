// Last updated: 5/10/2026, 11:52:50 PM
class Solution {
public:
    int hammingWeight(int n) {
        int count = 1;
        while(n > 1){
            if(n%2 == 1)count++;
            n /= 2;
        }
        return count;
    }
};