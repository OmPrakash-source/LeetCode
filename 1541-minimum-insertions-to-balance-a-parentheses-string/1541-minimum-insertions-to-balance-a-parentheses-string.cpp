class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        int open = 0;
        
        int i=0, ans  = 0;
        while(i < s.size()){
            if(s[i] == '('){ open++; i++; }
            else if(i < s.size()-1 && (s[i] == ')' && s[i+1] ==  ')')){
                if(open > 0)
                    open--;
                else
                    ans++;
                i += 2;
            }else{
                ans++;
                if(open > 0)
                    open--;
                else
                    ans++;
                i++;
            }
        }
        if(open > 0) ans += open*2;
        return ans;
    }
};