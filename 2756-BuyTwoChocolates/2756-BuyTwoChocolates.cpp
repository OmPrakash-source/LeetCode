// Last updated: 5/10/2026, 11:45:18 PM
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        return ((prices[0] + prices[1]) <= money)? money - (prices[0] + prices[1]) : money;
    }
};