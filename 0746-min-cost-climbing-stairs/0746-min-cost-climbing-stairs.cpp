class Solution {
public:

int func(vector<int>& cost,vector<int>&dp,  int idx){
    if(idx == cost.size()-1 || idx == cost.size()-2) return dp[idx] = cost[idx];
    if(dp[idx] != -1){
        return dp[idx];
    }
    return dp[idx] = min(func(cost, dp, idx+1), func(cost,dp, idx+2)) + cost[idx];

}
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(), -1);
        int mini = min(func(cost, dp, 0), func(cost, dp, 1));
        return mini;
    }
};