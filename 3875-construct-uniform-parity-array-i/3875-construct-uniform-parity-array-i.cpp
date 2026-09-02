class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd = 0, even = 0;

        for (int x : nums1) {
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == nums1.size())
            return true;

        if (even > 0 && odd > 0)
            return true;

        if (odd == nums1.size() && nums1.size() >= 2)
            return true;

        return true;
    }
};
