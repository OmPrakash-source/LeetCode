class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool flag = true;
        int p1 = 0, p2 = 0;
        int sswap = 0;
        for(int i=0; i<nums.size(); i++){
            sswap++;
            if(nums[i] % 2 != 0) flag = !flag;
            if(sswap == 6){
                flag = !flag;
                sswap = 0;
            } 
            if(flag) p1 += nums[i];
            else p2 += nums[i];
        }
        return p1-p2;
    }
};