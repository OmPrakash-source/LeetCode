// Last updated: 5/11/2026, 10:14:20 PM
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>result;

        //----- approach 1-------

        // for(int i : nums){
        //     string st = to_string(i);
        //     reverse(st.begin(),st.end());
        //     i = stoll(st);
        //     while(i > 0){
        //         int ld = i % 10;
        //         result.push_back(ld);
        //         i /= 10;
        //     }
        // }

        //------- approach 2 ---------
        for(int &it : nums){
            string st = to_string(it);
            for(auto &ch : st) result.push_back(ch - '0');
        }
        return result;
    }
};