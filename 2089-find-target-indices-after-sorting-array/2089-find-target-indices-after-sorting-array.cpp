class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        vector<int>ans;
        // for(int i=0; i<nums.size(); i++) if(nums[i] == target) ans.push_back(i);

        int small = 0, cnt = 0;

        int i=0;
        while(i < nums.size()){
            if(nums[i] < target) small++;
            else if(nums[i] == target) cnt++;

            i++;
        }
        while(cnt > 0){
            ans.push_back(small++);
            cnt--;
        }
        return ans;
    }
};