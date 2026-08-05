class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>>result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i <= n - 3; i += 3){
            if(nums[i+2] - nums[i] > k) return result;
        }
        
        int i=0;
        while(i < n){
            int j = 0;
            vector<int>temp;
            while(j < 3){
                temp.push_back(nums[i++]);
                j++;
            }
            result.push_back(temp);
        }
        return result;
    }
};