class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, n =  nums.size();
        // for(int i=0; i<n; i++){
        //     int sum = 0;
        //     for(int j=i; j<n; j++){
        //         sum += nums[j];
        //         if(sum == k) count++;
        //     }
        // }
        // return count;

        unordered_map<int,int>mpp;
        mpp[0] = 1;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];

            if(mpp.find(sum - k) != mpp.end()){
                count += mpp[sum - k];
            }
            mpp[sum]++;
        }
        return count;
    }
};