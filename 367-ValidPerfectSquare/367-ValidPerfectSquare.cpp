// Last updated: 5/10/2026, 11:51:33 PM
class Solution {
public:
    bool isPerfectSquare(int nums) {
        int st = 1, end = nums/2;
        if(nums < 2)return true;
        long long seq;
        int mid;
        while(st<=end){
            mid = (st + end)/2;
            seq = (long long)mid * mid;
            if(seq == nums) return true;
            else if(seq < nums) st = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
};