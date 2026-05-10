// Last updated: 5/10/2026, 11:44:30 PM
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddsum = 0,evensum = 0;
        for(int i=1; i<=n*2; i++){
            if(i%2==0)evensum+=i;
            else oddsum+=i;
        }
        return __gcd(oddsum,evensum);
    }
};