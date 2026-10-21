class Solution {
public:
    string reverseAstring(string s){
        int i = 0, j = s.length() - 1;
        while(i < j){
            swap(s[i], s[j]);
            i++; j--;
        }
        return s;
    }

    string longestPalindrome(string s) {
        string t = reverseAstring(s);
        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

        int maxLen = 0;
        int endIndex = 0;  // stores end index of palindrome in s

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;

                    // check if substring really aligns (palindrome condition)
                    int origIndex = i - 1;       // end index in s
                    int revIndex  = n - j;       // start index in s (because reversed)

                    if(dp[i][j] > maxLen && origIndex - dp[i][j] + 1 == revIndex){
                        maxLen = dp[i][j];
                        endIndex = i - 1;
                    }
                }
            }
        }
        return s.substr(endIndex - maxLen + 1, maxLen);
    }
};
