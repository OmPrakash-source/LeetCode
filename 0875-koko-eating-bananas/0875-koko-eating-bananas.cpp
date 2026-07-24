class Solution {
public:
    long long find_hours(vector<int>&a, int hr){
        long long ans = 0;
        for(int i:a){
            ans += ceil((double)i / (double)hr);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
    //     int st = 1;
    //     int end = 0;
    //     for(int i:a){
    //         if(end < i){
    //             end = i;
    //         }
    //     }
    //     while(st <= end){
    //         int mid = (st + end) / 2;
    //         if(find_hours(a,mid) <= (long long)h){
    //             end = mid-1;
    //         }else{
    //             st = mid+1;
    //         }
    //     }
    // return st;

        // for(int i=1; i<=*max_element(nums.begin(), nums.end()); i++){
        //     if(find_hours(nums, i) <= (long long)h) return i;
        // }
        // return -1;
        int   ans = -1;
        int i = 1, j = *max_element(nums.begin(), nums.end());
        while(i <= j){
            int mid = i + (j-i)/2;
            if(find_hours(nums, mid) <= (long long) h){
                ans = mid;
                j = mid-1;
            }
            else i = mid+1;
        }
        return ans;
    }
};