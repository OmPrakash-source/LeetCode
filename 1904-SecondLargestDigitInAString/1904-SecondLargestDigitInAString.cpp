// Last updated: 5/10/2026, 11:46:38 PM
class Solution {
public:
    int secondHighest(string s) {
        int maxi = -1, smaxi = -1;
        for(char ch : s){
            if(ch >= '0' && ch <= '9'){
                int num = ch - '0'; // can here use stoi 
                if(maxi < num){
                    smaxi = maxi;
                    maxi = num;
                }else if(num < maxi && num > smaxi){
                    smaxi = num;
                }
            }
        }
        return smaxi;
    }
};