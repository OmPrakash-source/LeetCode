// Last updated: 5/10/2026, 11:51:19 PM
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int d1 = (i >= 0) ? num1[i--] - '0' : 0;
            int d2 = (j >= 0) ? num2[j--] - '0' : 0;

            int sum = d1 + d2 + carry;
            carry = sum / 10;
            result.push_back((sum % 10) + '0');
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
