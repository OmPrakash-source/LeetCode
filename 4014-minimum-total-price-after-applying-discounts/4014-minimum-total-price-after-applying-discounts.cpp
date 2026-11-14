class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(discounts.rbegin(), discounts.rend());
        sort(prices.rbegin(), prices.rend());

        int n = prices.size();
        int m = discounts.size();

        double ans= 0;
        for(int i=0; i<n; i++){
            if(i < m)
                ans += prices[i] * (double)(100 - discounts[i]) / 100;
            else
                ans += prices[i];
        }
    return ans;
    }
};