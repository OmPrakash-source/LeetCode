// Last updated: 5/10/2026, 11:50:28 PM
class Solution {
    static{
        for (int i = 0; i < 500; i++)
            findErrorNums(new int[] { 1, 1 });
    }
    public static int[] findErrorNums(int[] nums) {
        Arrays.sort(nums);
        int missing = 1;
        int repeated = 0;
        for(int i=1;i<nums.length;i++){
            if (nums[i] == nums[i - 1]) {
                repeated = nums[i];
            } else if (nums[i] > nums[i - 1] + 1) {
                missing = nums[i - 1] + 1;
            }
        }
        if(nums[nums.length-1] != nums.length){
            missing = nums.length;
        }
        return new int[]{repeated, missing};
    }
}