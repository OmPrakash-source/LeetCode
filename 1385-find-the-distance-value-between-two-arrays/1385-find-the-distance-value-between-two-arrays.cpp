class Solution {
public:
    int findTheDistanceValue(vector<int>& nums1, vector<int>& nums2, int d) {
        int cnt = 0;
        int n = nums1.size();
        int m = nums2.size();
        // for(int i=0; i<n; i++){
        //     bool flag = true;
        //     for(int j=0; j<m; j++){
        //         if(abs(nums1[i] - nums2[j]) <= d) flag = false;
        //     }
        //     if(flag) cnt++;
        // }
        // return cnt;

        sort(nums2.begin(),nums2.end());
        for(int i=0; i<n; i++){
            int l=0, r=m-1;
            bool flag = true;
            while(l <= r){
                int mid = l + (r-l)/2;
                if(abs(nums2[mid]-nums1[i]) <= d){
                    flag = false;
                    break;
                }else if(nums2[mid] < nums1[i] - d){
                    l = mid+1;
                }else{
                    r = mid-1;
                }
            }
            if(flag) cnt++;
        }
        return cnt;
    }   
};