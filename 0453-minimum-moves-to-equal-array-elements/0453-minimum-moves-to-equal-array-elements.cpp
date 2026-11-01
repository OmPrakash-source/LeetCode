class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());

        long long cnt = 0;
        for(int i=0; i<nums.size(); i++){
            int val = nums[i];
            if(val > mini) cnt += (val - mini);
        }
        return (int)cnt;
    }
};