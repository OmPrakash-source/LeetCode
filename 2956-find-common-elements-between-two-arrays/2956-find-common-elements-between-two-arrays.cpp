class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st1(nums1.begin(), nums1.end());
        unordered_set<int>st2(nums2.begin(), nums2.end());

        int cnt1=0, cnt2=0;
        for(int i : nums1){
            for(int j : st2){
                if(i == j) cnt1++;
            }
        }

        for(int i : nums2){
            for(int j : st1)
                if(i == j) cnt2++;
        }
        return {cnt1, cnt2};
    }
};