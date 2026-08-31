class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int mini = INT_MAX,maxi = INT_MIN, maxidx = -1, minidx = -1;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            if(maxi < nums[i]){
                maxi = nums[i];
                maxidx = i;
            }
            if(mini > nums[i]){
                mini = nums[i];
                minidx = i;
            }
        }
        int left = min(minidx, maxidx);
        int right = max(minidx, maxidx);
       return min({right + 1, n - left, (left + 1) + (n - right)});
    }
};