// Last updated: 5/10/2026, 11:44:32 PM
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0, j=0;
        int maxlen = 0;
        while(i < n){
            while(j < n && nums[j] <= (long long)k * nums[i]){
                j++;
            }
            maxlen = max(maxlen, j-i);
            i++;
            
        }
        return n-maxlen;
    }
};