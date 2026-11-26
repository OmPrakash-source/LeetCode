class Solution {
public:
    bool canAliceWin(int n) {
        int i = 10;
        while(n >= 0){
            if(n < i) return false;
            n -= i;
            i--;
            // if(n < i) return true;
            n -= i;
            i--;
        }
        return true;
    }
};