class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi1=1, maxi2=1;
        int cnt1=1, cnt2=1;

        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] < nums[i]) cnt1++;
            else cnt1= 1;
            maxi1 = max(maxi1, cnt1);

            if(nums[i-1] > nums[i]) cnt2++;
            else cnt2= 1;
            maxi2 = max(maxi2, cnt2);
        }
        return max(maxi1, maxi2);
    }
};