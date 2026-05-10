// Last updated: 5/10/2026, 11:49:44 PM
class Solution {
public:
    long long find_hours(vector<int>&a, int hr){
        long long ans = 0;
        for(int i:a){
            ans += ceil((double)i / (double)hr);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& a, int h) {
        int st = 1;
        int end = 0;
        for(int i:a){
            if(end < i){
                end = i;
            }
        }
        while(st <= end){
            int mid = (st + end) / 2;
            if(find_hours(a,mid) <= (long long)h){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
    return st;
    }
};