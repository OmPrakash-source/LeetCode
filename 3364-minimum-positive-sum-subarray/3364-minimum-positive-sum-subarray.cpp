class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini = 1e9, n = nums.size();

        for(int k=l; k<=r; k++){
            int i=0, j=0;
            int sum = 0;
            while(j < n){
                sum+=nums[j];
                while(j-i+1 > k){
                    sum -= nums[i];
                    i++;
                }
                if(j-i+1 == k){
                    if(sum < mini && sum > 0){
                        mini = sum;
                    }
                }
                j++;
            }
        }
        return (mini == 1e9) ? -1 : mini;
    } 
};