// Last updated: 6/18/2026, 4:20:43 PM
class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int []ans = new int[nums.length];
        int k = 0;
        for(int i : nums) if(pivot > i) ans[k++] = i;
        for(int i : nums) if(pivot == i) ans[k++] = i;
        for(int i : nums) if(pivot < i) ans[k++] = i;
        return ans;
    }
}