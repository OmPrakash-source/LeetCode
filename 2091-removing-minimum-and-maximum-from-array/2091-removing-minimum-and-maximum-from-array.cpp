class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = -1e9, maxi = 1e9, idxl = -1, idxm = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(mini < nums[i]){
                mini = nums[i];
                idxl = i;
            }
            if(maxi > nums[i]){
                maxi = nums[i];
                idxm = i;
            }
        }
        mini = min(idxl, idxm);
        maxi = max(idxl, idxm);
        
        int fromLeft = maxi + 1;
        int fromRight = n-mini;
        int bothEnd = (mini+1)+(n-maxi);

        return min({fromRight, fromLeft, bothEnd});
    }
};