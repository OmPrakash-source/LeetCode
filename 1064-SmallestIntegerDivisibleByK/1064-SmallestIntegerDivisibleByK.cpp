// Last updated: 5/10/2026, 11:48:29 PM
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int length = 1, rem = 1;
        if(k % 2 == 0 || k % 5 == 0) return -1;
        
        while(rem%k != 0){
            rem = (rem*10+1) % k;
            length++;
        }
        return length;
    }
};