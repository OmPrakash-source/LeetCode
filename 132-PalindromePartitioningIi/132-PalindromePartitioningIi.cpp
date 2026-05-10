// Last updated: 5/10/2026, 11:53:34 PM
class Solution {
public:
    vector<vector<int>> dp;

    bool isPalindrome(string &s, int i, int j) {
        while(i < j) {
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }

    int solve(string &s, int i, int j) {
        if(i >= j || isPalindrome(s, i, j)) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        int minCuts = INT_MAX;

        for(int k = i; k < j; ++k) {
            if(isPalindrome(s, i, k)) {
                int right = solve(s, k + 1, j); // no need to check left since it's palindrome
                minCuts = min(minCuts, 1 + right);
            }
        }

        return dp[i][j] = minCuts;
    }

    int minCut(string s) {
        int n = s.size();
        dp.resize(n, vector<int>(n, -1));
        return solve(s, 0, n - 1);
    }
};
