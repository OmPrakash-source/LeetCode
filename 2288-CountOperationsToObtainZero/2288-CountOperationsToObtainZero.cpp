// Last updated: 5/10/2026, 11:45:56 PM
class Solution {
public:
    int countOperations(int n1, int n2) {
       int count = 0;
        while(n1!=0 && n2!=0){
            if(n1 < n2) n2 = n2 - n1;
            else n1 = n1-n2;
            count++;
        } 
        return count;
    }
};