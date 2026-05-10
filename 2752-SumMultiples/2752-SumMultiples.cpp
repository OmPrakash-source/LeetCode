// Last updated: 5/10/2026, 11:45:19 PM
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for(int i=1; i<=n; i++){
            if(i%3 ==0){
                sum+=i;
            }
            else if(i%5 ==0){
                sum+=i;
            }
            else if(i%7 ==0){
                sum+=i;
            }
        }
        return sum;
    }
};