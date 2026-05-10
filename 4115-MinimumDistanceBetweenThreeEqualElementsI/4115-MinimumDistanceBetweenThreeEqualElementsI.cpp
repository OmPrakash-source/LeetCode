// Last updated: 5/10/2026, 11:44:28 PM
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size() <= 2) return -1;
        int mini = 1e9;
        for(int i=0; i<nums.size()-2; i++){
            for(int j=i+1; j<nums.size()-1; j++){
                for(int k=j+1; k<nums.size(); k++){
                    if((nums[i] == nums[j]) && (nums[j] == nums[k])){
                        mini = min(mini, abs(i-j) + abs(j-k) + abs(k-i));
                    }
                }
            }
        }
        return (mini != 1e9) ? mini : -1;
    }
};