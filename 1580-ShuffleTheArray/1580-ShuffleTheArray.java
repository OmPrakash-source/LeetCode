// Last updated: 5/10/2026, 11:47:05 PM
class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] ans = new int[n*2];
        for(int i=0; i<n; i++){
            ans[2*i] = nums[i];
            ans[(2*i)+1] = nums[i+n];
        }
        return ans;
    }
}