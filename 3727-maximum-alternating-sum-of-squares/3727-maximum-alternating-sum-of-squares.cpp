class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        long long sum = 0;
        for(int i=0; i<nums.size(); i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());

        int i=0, j=nums.size()-1;
        while(i < j){
            sum += (nums[j--]-nums[i++]);
        }
        if(i == j) sum += nums[j];
        return sum;
    }
};