class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int midIdx = (n-1)/2;
        sort(nums.begin(), nums.end());
        int i = 0, j = n-1;
        int cnt = 0;

        while(i < midIdx || j > midIdx){
            if(i < midIdx) cnt += nums[midIdx] - nums[i++];
            if(j > midIdx) cnt += nums[j--] - nums[midIdx];

        }
        return cnt;

    }
};