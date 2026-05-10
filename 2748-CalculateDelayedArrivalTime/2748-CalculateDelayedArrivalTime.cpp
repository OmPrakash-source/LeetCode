// Last updated: 5/10/2026, 11:45:21 PM
class Solution {
public:
    int findDelayedArrivalTime(int a, int b) {
        return (a+b) % 24;
    }
};