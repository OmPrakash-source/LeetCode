// Last updated: 5/10/2026, 11:48:05 PM
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int result = 0;

        for (int num : nums) {
            int divcount = 0;
            int temp = 0;

            for (int i = 1; i * i <= num; i++) {
                if (num % i == 0) {
                    int d1 = i;
                    int d2 = num / i;

                    if (d1 == d2) {        // perfect square
                        divcount += 1;
                        temp += d1;
                    } else {
                        divcount += 2;
                        temp += d1 + d2;
                    }

                    if (divcount > 4) break;
                }
            }

            if (divcount == 4) {
                result += temp;
            }
        }

        return result;
    }
};
