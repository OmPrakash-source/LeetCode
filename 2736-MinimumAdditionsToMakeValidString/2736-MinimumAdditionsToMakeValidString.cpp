// Last updated: 5/10/2026, 11:45:22 PM
class Solution {
public:
    int addMinimum(string word) {

        int n = word.size();
        if(n == 1) return 2;
        int count = 0;
        char expacted = 'a';
        for(char i : word){
            while(i != expacted){
                count++;
                expacted = (expacted == 'a' ? 'b' : 
                            expacted == 'b' ? 'c' : 'a');
            }
            expacted = (expacted == 'a' ? 'b' : 
                        expacted == 'b' ? 'c' : 'a');
        }
        if(expacted == 'b'){
            count+=2;
        }else if(expacted == 'c'){
            count += 1;
        }
        return count;
    }
};