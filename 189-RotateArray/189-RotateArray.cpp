// Last updated: 5/10/2026, 11:52:46 PM
class Solution {
public:
    void reverse(vector<int>& nums, int st, int end){
        while(st <= end){
            swap(nums[st],nums[end]);
            st++; end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int n = nums.size()-1;
        reverse(nums, 0, n);
        reverse(nums, 0, k-1);
        reverse(nums, k, n);
    }
};