class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // int count = 0;
        // for(int i=0; i<nums.size(); i++){
        //     int sum = 0;
        //     for(int j=i; j<nums.size(); j++){
        //         sum += nums[j];
        //         if(sum % k == 0) count++;
        //     }
        // }
        // return count;
        vector<int> remCount(k, 0);
        remCount[0] = 1; 
        int prefix = 0;
        int result = 0;

        for (int num : nums) {
            prefix += num;
            int rem = ((prefix % k) + k) % k;
            result += remCount[rem];
            remCount[rem]++;
        }

        return result;
    }
};