// Last updated: 5/10/2026, 11:46:49 PM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int> mpp;
        for (int x : nums)
            mpp[x]++;

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mpp[a] == mpp[b])
                return a > b;          // higher value first
            return mpp[a] < mpp[b];   // lower frequency first
        });

        return nums;
    }
};
