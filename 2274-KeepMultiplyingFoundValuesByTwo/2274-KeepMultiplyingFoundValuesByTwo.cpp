// Last updated: 5/10/2026, 11:45:59 PM
class Solution {
public:
    int findFinalValue(vector<int>& nums, int og) {
        unordered_set<int>st(nums.begin(),nums.end());
        while(st.count(og)){
            og = og*2;
        }
        return og;
    }
};