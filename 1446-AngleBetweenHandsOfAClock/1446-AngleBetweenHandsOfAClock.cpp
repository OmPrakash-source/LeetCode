// Last updated: 6/18/2026, 4:21:48 PM
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double result = abs((30*hour) - (5.5*minutes));
        return (result > 180) ? 360-result: result;
    }
};