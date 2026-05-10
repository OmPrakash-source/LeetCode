// Last updated: 5/10/2026, 11:46:03 PM
class Solution {
public:
    bool checkString(string s) {
        int n = s.size(), idx;
        for(int i=0; i<n; i++){
            if(s[i] == 'b'){
                idx = i; 
                break;
            }
        }
        for(int j=idx; j<n; j++){
            if(s[j] == 'a') return false;
        }
        return true;
    }
};