// Last updated: 6/18/2026, 4:21:45 PM
class Solution {
    public double angleClock(int h, int m) {
        double d = Math.abs(30*h - 5.5*m);
        return (d > 180)?360-d:d;
    }
}