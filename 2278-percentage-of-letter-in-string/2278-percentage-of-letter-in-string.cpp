class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt=0;
        int n=s.size();
        for(char ch : s)
            if(ch == letter)
                cnt++;
        return (cnt * 100) / n;
    }
};