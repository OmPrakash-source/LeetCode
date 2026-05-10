// Last updated: 5/10/2026, 11:46:31 PM
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int>nums;
        // for(int i=0; i<n; i++){
        //     for(int j=i; j<m; j++){
        //         if(i <= j && nums1[i] <= nums2[j]){
        //             nums.push_back(j-i+1);
        //         }
        //     }
        // }
        // sort(nums.begin(), nums.end());
        // return (nums.empty()) ? 0 : nums[nums.size()-1] - nums[0];

        int i=0, j=0, ans = 0;

        while(i < n && j < m){
            if(i > j || nums1[i] > nums2[j]){
                i++;
                j++;
            }else if(i <= j && nums1[i] <= nums2[j]){
                ans = max(ans, j - i);
                j++;
            }
        }
         return ans;
    }
};