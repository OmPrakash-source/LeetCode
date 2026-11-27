class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, cnt = 0;
        int j=0, n=nums.size();
        unordered_map<int,int>mpp;
        mpp[0] = 1;

        while(j < n){
            sum += nums[j];
            if(mpp.find(sum - k) != mpp.end()) cnt += mpp[sum - k];
            mpp[sum]++;
            j++;
        }
        return cnt;
    }
};