class Solution {
public:
    string result = "";

    void func(int &k, string str, string ans) {
        if (str.empty()) {
            k--;
            if (k == 0) result = ans;
            return;
        }

        for (int i = 0; i < str.size(); i++) {
            string remaining = str;
            remaining.erase(i, 1);

            func(k, remaining, ans + str[i]);

            if (k == 0) return;
        }
    }

    string getPermutation(int n, int k) {
        string str;
        for (int i = 1; i <= n; i++) {
            str += ('0' + i);
        }

        func(k, str, "");
        return result;
    }
};