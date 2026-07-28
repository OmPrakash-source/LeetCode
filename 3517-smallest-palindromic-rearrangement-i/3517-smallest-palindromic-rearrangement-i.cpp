class Solution {
public:
    string smallestPalindrome(string s) {
        sort(s.begin(), s.end());

        string left = "";
        string mid = "";

        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (j < s.size() && s[j] == s[i])
                j++;

            int cnt = j - i;

            left += string(cnt / 2, s[i]);

            if (cnt % 2)
                mid = s[i];

            i = j;
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};