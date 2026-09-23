class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for(int &i : nums) sum += i;

        x = sum-x; sum = 0;
        int i=0, j=0, maxi = -1, n = nums.size();
        
        while(j < n){
            sum += nums[j];
            while(i < n && sum > x){
                sum -= nums[i++];
            }
            if(sum == x && maxi < j-i+1){
                maxi = j-i+1;
            }
            j++;
        }
        return (maxi != -1) ? (n - maxi) : maxi;
    }
};