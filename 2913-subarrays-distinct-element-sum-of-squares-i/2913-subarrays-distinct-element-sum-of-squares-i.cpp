class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0, n = nums.size();
        for(int i=0; i<n; i++){
            unordered_set<int>st;
            for(int j=i; j<n; j++){
                // if(st.find(nums[j]) != st.end())
                st.insert(nums[j]);
                if(!st.empty())
                    sum += (st.size() * st.size());
            }
        }
        return sum;
    }
};