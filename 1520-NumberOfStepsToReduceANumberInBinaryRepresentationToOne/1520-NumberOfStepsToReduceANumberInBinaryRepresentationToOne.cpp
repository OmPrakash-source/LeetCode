// Last updated: 5/10/2026, 11:47:24 PM
class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;

        for (int i = s.size() - 1; i > 0; i--) {
            int bit = (s[i] - '0') + carry;
            
            if (bit == 1) { 
                carry = 1;
                steps += 2;
            } else {
                steps += 1;
            }
        }

        return steps + carry;
    }
};
