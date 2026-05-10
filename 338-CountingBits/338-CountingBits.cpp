// Last updated: 5/10/2026, 11:51:45 PM
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>nums(n+1);
        int i=0;
        while(i <= n){
            int count = 0;
            int j = i;
            while(j > 0){
                if(j%2 == 1) count++;
                j /= 2;
            }
            nums[i] = count;
            i++;
        }
        return nums;
    }
};