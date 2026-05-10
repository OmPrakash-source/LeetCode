// Last updated: 5/10/2026, 11:51:20 PM
class Solution {
public:
    
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long fe = LLONG_MIN, se = LLONG_MIN, te = LLONG_MIN;
        int n = nums.size();
        for(int i : nums){
            if(i == fe || i == se || i == te) continue;
            if(i > fe){
                te = se;
                se = fe;
                fe = i;
            }else if(i > se){
                te = se;
                se = i;
            }else{
                te = i;
            }
        }
       return (te == LLONG_MIN) ? (int)fe : (int)te;
    }
};
