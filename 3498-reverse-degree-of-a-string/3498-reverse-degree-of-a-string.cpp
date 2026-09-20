class Solution {
public:
    int reverseDegree(string s) {

        int result = 0;
        
        for(int i=0; i<s.size(); i++){
            int val = ('z' - s[i]) + 1;
            result += (val * (i+1));
        }
        return result;
    }
};