class Solution {
public:
    int dfs(int idx, int amount, vector<int>& coin, vector<vector<int>> &dp){
        if(idx < 0) return 1e9;
        if(amount == 0) return 0;
        // if(idx == 0){
        //     if (amount % coin[0] == 0)
        //         return amount / coin[0];
        //     return 1e9;
        // }
        if(dp[idx][amount] != -1) return dp[idx][amount];
        
        int skip = dfs(idx-1, amount, coin, dp);
        int take = 1e9;
        if(amount >= coin[idx]){
            take = 1 + dfs(idx, amount - coin[idx], coin, dp);
        }
        return dp[idx][amount] = min(take, skip);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();

        vector<vector<int>>dp(n+1, vector<int>(amount+1, -1));
        int ans = dfs(n-1 , amount, coins, dp);
        return (ans >= 1e9) ? -1 : ans;
    }
};