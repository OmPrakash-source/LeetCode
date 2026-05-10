// Last updated: 5/10/2026, 11:49:21 PM
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
    // approach 1
        // int maxi = INT_MIN;
        // for(int i : arr){
        //     maxi = max(maxi,i);
        // }
        // int idx;

        // if(maxi == arr[0] || maxi == arr[arr.size()-1]) return false;

        // for(int i=0; i<arr.size(); i++){
        //     if(maxi == arr[i]){
        //         idx = i;
        //         break;
        //     }
        // }
        // for(int i=idx; i>0; i--){
        //     if(arr[i] <= arr[i-1]){
        //         return false;
        //     }
        // }
        // for(int i=idx; i<arr.size()-1; i++){
        //     if(arr[i] <= arr[i+1]){
        //         return false;
        //     }
        // }
        // return true;

    //approach 2
        int n = arr.size();
        if(n < 3) return false;
        int i=0, j=arr.size()-1;
        while(i+1 < n && arr[i] < arr[i+1])i++;
        while(j-1 >= 0 && arr[j] < arr[j-1])j--;
        if(i == n-1 || j == 0)return false;
        return i == j;
    }
};