// Last updated: 5/10/2026, 11:45:49 PM
class Solution {
public:
    // bool checkmid(vector<int>nm, int target){
    //     int end = nm.size()-1;
    //     int st = 0;
    //     while(st <= end){
    //         int mid = (st + end) / 2;
    //         if(target == nm[mid]) return true;

    //         else if(target > nm[mid]) st = mid+1;

    //         else end = mid-1;
    //     }
    //     return false;
    // }
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        int n = nums.size();
        unordered_set<int> m(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(m.find(nums[i]+diff) != m.end() && m.find(nums[i]+(2*diff)) != m.end()){
                count++;
            }
        }
        return count;
    }
};