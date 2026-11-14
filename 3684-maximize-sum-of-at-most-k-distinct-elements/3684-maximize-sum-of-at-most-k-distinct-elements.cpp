class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());
        vector<int>temp;
        int i = 0;
        while(i < nums.size() && temp.size() < k){

            if(temp.empty() || temp.back() != nums[i]){
                temp.push_back(nums[i]);
            }
            i++;
        }
        return temp;
    }
};