class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int n = nums.size(), i=0, j=0;
        long long sum=0, maxi = 0;

        while(j < n){
            mpp[nums[j]]++;
            sum += nums[j];
            
            while(mpp.size() < j-i+1 || k < j-i+1){
                mpp[nums[i]]--;
                if(mpp[nums[i]] == 0) mpp.erase(nums[i]);
                sum -= nums[i++];
            }
            if(j-i+1 == k)
                if(maxi < sum)
                    maxi = sum;
            j++;
        }
        return maxi;
    }
};