// Last updated: 6/18/2026, 4:19:25 PM
class Solution {
    public long maxTotalValue(int[] nums, int k) {
        // int maxi = Integer.MIN_VALUE, mini = Integer.MAX_VALUE;
        // for(int i=0; i<nums.length; i++){
        //     maxi = Math.max(maxi, nums[i]);
        //     mini = Math.min(mini, nums[i]);
        // }
        // return (long)k * (long)(maxi-mini);

        int mini = Integer.MAX_VALUE, maxi = Integer.MIN_VALUE;
        for(int i : nums){
            mini = Math.min(mini, i);
            maxi = Math.max(maxi, i);
        }
        return k * (long)(maxi-mini);
    }
}