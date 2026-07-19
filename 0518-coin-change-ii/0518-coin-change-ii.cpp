class Solution {
public:
    int func(vector<int>& coins, vector<vector<int>> &dp, int t, int idx){
        if(idx < 0) return 0;
        if(0 == t) return 1;
        
        if(dp[idx][t] != -1) return dp[idx][t];
        int take  = 0;
        if(t >= coins[idx]){
            take = func(coins, dp, t - coins[idx], idx);
        }
        
        return dp[idx][t] = take + func(coins, dp, t, idx-1);
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(), vector<int>(amount + 1, -1));
        
        return func(coins, dp, amount, coins.size() - 1);
    }
};