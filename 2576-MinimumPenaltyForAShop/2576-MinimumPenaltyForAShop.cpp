// Last updated: 5/10/2026, 11:45:34 PM
class Solution {
public:
    int bestClosingTime(string c) {
        int remaningY = 0;
        for(char ch : c)
            if(ch == 'Y')
                remaningY++;
        
        int prefix = 0, besthour = 0, minpenalty = remaningY;
        for(int i=1; i<=c.size(); i++){
            if(c[i-1] == 'Y'){
                remaningY--;
            }else{
                prefix++;
            }

            int penalty = prefix + remaningY;
            if(minpenalty > penalty){
                minpenalty = penalty;
                besthour = i;
            }
        }
        return besthour;
    }
};