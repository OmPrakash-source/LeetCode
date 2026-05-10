// Last updated: 5/10/2026, 11:46:26 PM
class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int c=1; c<=n; c++){
            for(int b=c+1; b<=n; b++){
                int sum = c*c + b*b;
                int a = sqrt(sum);
                if(a <= n && a*a == sum) count+=2;
            }
        }
        return count;
    }
};