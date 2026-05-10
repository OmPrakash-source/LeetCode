// Last updated: 5/10/2026, 11:44:31 PM
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        if (n == 0) return 0;

        int freq[10] = {0};
        while (n > 0) {
            freq[n % 10]++;
            n /= 10;
        }

        int mini = INT_MAX;
        int ele = -1;
        for (int d = 0; d <= 9; ++d) {
            if (freq[d] > 0 && (freq[d] < mini || (freq[d] == mini && d < ele))) {
                mini = freq[d];
                ele = d;
            }
        }
        return ele;
    }
};
