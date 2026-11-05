class Solution {
public:
    int findTheDistanceValue(vector<int>& nums1, vector<int>& nums2, int d) {
        int cnt = 0;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0; i<n; i++){
            bool flag = true;
            for(int j=0; j<m; j++){
                if(abs(nums1[i] - nums2[j]) <= d) flag = false;
            }
            if(flag) cnt++;
        }
        return cnt;

        // sort(nums2.begin(),nums2.end());
        // int i=0, j=n-1;
        // while(i < j){
        //     int mid = i + (j-i)/2;
        //     if()
        // }
    }
};