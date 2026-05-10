// Last updated: 5/10/2026, 11:45:09 PM
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int countL = 0, countR = 0, countspace = 0;
        for(char ch : moves){
            if(ch == 'L' )countL++;
            else if(ch == 'R') countR++;
            else countspace++;
        }
        if(countL >= countR) countL += countspace;
        if(countL < countR) countR += countspace;
        if(countL == 0 && countR == 0) return countspace;

        return abs(countL - countR);
    }
};