class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // unordered_set<int>st(nums.begin(), nums.end());
        // int num = k;
        // while(true){
        //     if(st.find(num) == st.end()) return num;
        //     num += k;
        // }
        // return 0;



        sort(nums.begin(), nums.end()); int j = k; for(int i : nums) if(i == j) j += k; return j;
    }
};