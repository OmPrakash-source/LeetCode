// Last updated: 5/10/2026, 11:45:53 PM
class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.size();
        int removeIndex = -1;

        // Find the best index to remove
        for (int i = 0; i < n; i++) {
            if (number[i] == digit) {
                removeIndex = i;
                if (i + 1 < n && number[i + 1] > digit) {
                    break;
                }
            }
        }

        // Build the result manually
        string result = "";
        for (int i = 0; i < n; i++) {
            if (i == removeIndex) continue;
            result += number[i];
        }

        return result;
    }
};
