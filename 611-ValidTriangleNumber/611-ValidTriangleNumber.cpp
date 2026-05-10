// Last updated: 5/10/2026, 11:50:32 PM
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n < 3) return 0;
        int count = 0;
        for(int i=0; i<n-2;i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    if(nums[i] + nums[j] > nums[k]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};