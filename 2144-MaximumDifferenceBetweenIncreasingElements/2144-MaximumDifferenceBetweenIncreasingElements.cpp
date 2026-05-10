// Last updated: 5/10/2026, 11:46:15 PM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi = -1;
        int n= nums.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] < nums[j]){
                    maxi = max(maxi, nums[j]-nums[i]);
                }
            }
        }
        return maxi;
    }
};
// auto init=atexit([]{std::ofstream("display_runtime.txt")<<"0";});