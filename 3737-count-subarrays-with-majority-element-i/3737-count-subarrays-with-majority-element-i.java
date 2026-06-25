class Solution {
    public int countMajoritySubarrays(int[] nums, int target) {
        int ans = 0;
        for(int i=0; i<nums.length; i++){
            int count = 0;
            for(int j=i; j < nums.length; j++){
                if(nums[j] == target) count++;
                int length = j - i + 1;
                if(count * 2 > length) ans++;
            }
        } 
        return ans;
    }
}