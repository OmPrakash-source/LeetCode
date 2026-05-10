// Last updated: 5/10/2026, 11:50:25 PM
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0, r = arr.size() - 1;
        while (r - l >= k) {
            if (abs(x - arr[l]) <= abs(x - arr[r])) {
                r--;
            } else {
                l++;
            }
        }
        return vector<int>(arr.begin() + l, arr.begin() + r + 1);
    }
};