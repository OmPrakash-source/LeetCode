// Last updated: 5/10/2026, 11:50:31 PM
class Solution {
public:
    // bool bs(int st,int end,int n){
    //     int mid = 0;
    //     long long seq = 0;
    //     while(st <= end){
    //         mid = (st + end) / 2;
    //         seq = (long long)(mid * mid);
    //         if(seq == mid) return true;
    //         else if(seq < mid) st = mid+1;
    //         else end = mid -1;
    //     }
    //     return false;
    // }
    bool judgeSquareSum(int c) {
        // for(long i=0; i*i <= c; i++){
        //     int b = c - (int)(i*i);
        //     if(bs(0,b,b))return true;
        // }
        // return false;
        long left = 0, right = (long)sqrt(c);
        while (left <= right) {
            long sum = left*left + right*right;
            if (sum == c) return true;
            else if (sum < c) left++;
            else right--;
        }
        return false;
    }
};