class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0, n = nums.size();
        unordered_set<int>st;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(st.find(nums[j]) == st.end())
                    st.insert(nums[j]);
                if(!st.empty())
                    sum += (st.size() * st.size());
            }
            st.clear();
        }
        return sum;
    }
};