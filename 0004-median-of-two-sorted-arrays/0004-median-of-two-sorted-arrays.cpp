class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int i=0, j=0;
        vector<long long>nums;
        while(i < n && j < m){
            if(nums1[i] < nums2[j]) nums.push_back(nums1[i++]);
            else nums.push_back(nums2[j++]);
        }
        while(i < n) nums.push_back(nums1[i++]);
        while(j < m) nums.push_back(nums2[j++]);
        for(int i : nums) cout<<i<<" ";

        cout<<endl; 
        int size = nums.size();
        if(size%2 != 0) return nums[size/2];
        return (double)(nums[(size/2)-1] + nums[size/2]) / 2;
    }
};