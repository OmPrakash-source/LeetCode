class Solution {
public:
    int bagOfTokensScore(vector<int>& nums, int power){
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = n-1;
        int ans = 0;
        int cnt = 0;
        while(i <= j){
            if(nums[i] <= power){
                power -= nums[i++];
                cnt++;
                ans = max(ans, cnt);
            }else if(cnt >= 1){
                power += nums[j--];
                cnt--;
            }else{
                break;
            }
        }
        
        return ans;
    }
};