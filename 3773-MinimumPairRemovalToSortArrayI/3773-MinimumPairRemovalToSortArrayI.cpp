// Last updated: 5/10/2026, 11:44:38 PM
class Solution {
public:
    bool isort(vector<int>& n){
        for(int i=0; i<n.size()-1; i++){
            if(n[i] > n[i+1]) return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        while(!isort(nums)){
            int minsum = INT_MAX;
            int idx = 0;
            for(int i=0; i<nums.size()-1; i++){
                int sum = nums[i] + nums[i+1];
                if(sum < minsum){
                    minsum = sum;
                    idx = i;
                }
            }
            nums[idx] = nums[idx] + nums[idx+1];
            nums.erase(nums.begin() + idx + 1);
            count ++;
        }
        return count;
    }
};