// Last updated: 5/10/2026, 11:46:20 PM
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k == 1)return 0;
        sort(nums.begin(),nums.end());
        int i=0,j=0,n=nums.size();
        int diff = INT_MAX;
        while(j < n){
            while(j-i+1 < k && j<n)
                j++;
            
            if(j-i+1 == k){
                diff = min(diff, nums[j]-nums[i]);
                j++;
                i++;
            }
        }
        return diff;
    }
};