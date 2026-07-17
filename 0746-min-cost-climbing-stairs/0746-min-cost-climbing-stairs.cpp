class Solution {
public:

// int func(vector<int>& cost,vector<int>&dp,  int idx){
//     if(idx == cost.size()-1 || idx == cost.size()-2) return dp[idx] = cost[idx];
//     if(dp[idx] != -1){
//         return dp[idx];
//     }
//     return dp[idx] = min(func(cost, dp, idx+1), func(cost,dp, idx+2)) + cost[idx];
// }
    int minCostClimbingStairs(vector<int>& cost) {
        // vector<int>dp(cost.size(), -1);
        // int mini = min(func(cost, dp, 0), func(cost, dp, 1));
        // return mini;

        int n = cost.size();

        int next1 = cost[n - 1];
        int next2 = cost[n - 2];

        for (int i = n - 3; i >= 0; i--) {
            int curr = cost[i] + min(next1, next2);
            next1 = next2;
            next2 = curr;
        }

        return min(next1, next2);
    }
};