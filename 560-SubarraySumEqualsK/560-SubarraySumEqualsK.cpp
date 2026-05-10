// Last updated: 5/10/2026, 11:50:41 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n= nums.size();
        int presum = 0;
        unordered_map<int,int>m;
        m[0] = 1;
        for(int i=0; i<n; i++){
           presum += nums[i];
           int remove = presum - k;
           count += m[remove];
           m[presum]++;
        }
        return count;
    }
};