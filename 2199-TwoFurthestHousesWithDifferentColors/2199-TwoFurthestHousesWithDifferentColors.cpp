// Last updated: 5/10/2026, 11:46:12 PM
class Solution {
public:
    int maxDistance(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        
        // // Pass 1: anchor i=0, shrink j from right
        // for(int j = n-1; j > 0; j--){
        //     if(nums[0] != nums[j]){
        //         maxi = max(maxi, j);
        //         break;
        //     }
        // }
        
        // // Pass 2: anchor j=n-1, shrink i from left
        // for(int i = 0; i < n-1; i++){
        //     if(nums[i] != nums[n-1]){
        //         maxi = max(maxi, (n-1) - i);
        //         break;
        //     }
        // }

        for(int i=0; i<n-1; i++){
            if(nums[n-1] != nums[i]){
                maxi = max(maxi, (n-1) - i);
                break;
            }
        }
        
        for(int i=n-1; i>0;i--){
            if(nums[0] != nums[i]){
                maxi = max(maxi, i);
                break;
            }
        }
        
        return maxi;
    }
};