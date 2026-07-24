class Solution {
public:
    // int const INF = 1e9;
    // int func(vector<int>& coins, int t, vector<vector<int>>& dp, int idx) {
    //     if (t == 0) return 0;
    //     if (idx < 0) return INF;

    //     if (dp[idx][t] != -1)
    //         return dp[idx][t];

    //     int skip = func(coins, t, dp, idx - 1);

    //     int take = INF;
    //     if (coins[idx] <= t)
    //         take = 1 + func(coins, t - coins[idx], dp, idx);

    //     return dp[idx][t] = min(skip, take);
    // }

    int const INF = 1e9;
    int func(int idx, int amount, vector<int>&coins, vector<vector<int>>&dp){
        if(amount == 0) return 0;
        if (idx < 0) return INF;

        if(dp[idx][amount] != -1) return dp[idx][amount];

        int take = INF;
        int skip = func(idx-1, amount, coins, dp);
        if(amount >= coins[idx]){
            take = 1 + func(idx, amount - coins[idx], coins, dp);
        }
        return dp[idx][amount] = min(skip, take);
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        vector<vector<int>>dp(coins.size()+1, vector<int>(amount+1, -1));
        int ans = func(coins.size()-1, amount, coins, dp);
        return(ans >= INF)? -1 : ans;

    }
};