class Solution {
public:
    int findGCD(vector<int>& nums) {
        int g = *max_element(nums.begin(), nums.end());
        int s = *min_element(nums.begin(), nums.end());
        if(g % s == 0) return s;
        for(int i=s/2; i>=2; i--){
            if(g % i == 0 && s % i == 0) return i;
        }
        return 1;

    }
};