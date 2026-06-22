// Last updated: 6/22/2026, 1:20:04 PM
class Solution {
    public int largestAltitude(int[] gain) {
        int maxi = 0;
        int val = 0;
        for(int i : gain){
            val = val + i;
            maxi = Math.max(maxi, val);
        }
        return maxi;
    }
}