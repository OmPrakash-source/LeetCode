// Last updated: 5/10/2026, 11:47:51 PM
class Solution {
public:
    int numberOfSteps(int num) {
        int var = 0;
        while(num){
            if(num%2 == 0)
                num /= 2;
            else
                num-=1;
            var++;
        }
        return var;
    }
};