class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();


        // unordered_set<int>st;
        // for(int i : nums) st.insert(i);
        // int result = 0;
        // for(int i:nums){
        //     int count = 1;
        //     if(st.find(i-1) == st.end()){
        //         while(st.find(i + count) != st.end()) count++;
        //     }
        //     result = max((int)result, (int)count);
        // }
        // return result;

        sort(nums.begin(), nums.end());
        int count = 1;
        int maxi = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] == nums[i])continue;
            else if((nums[i-1] + 1) != nums[i]) count = 1;
            else count++;

            if(maxi < count) maxi = count;
        }
        return maxi;
    }
};