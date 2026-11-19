class Solution {
public:
    int rows, cols;
    int findNext(int st, int target, vector<vector<int>>&rides){
        int end = rows-1, result = rows;

        while(st <= end){
            int mid = st + (end-st)/2;
            if(rides[mid][0] >= target){
                result = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return result;
    }
    long long dfs(int idx, vector<vector<int>>& rides, vector<long long>& dp){
        if(idx >= rows) return 0;

        if(dp[idx] != -1) return dp[idx];

        long long skip = dfs(idx+1, rides, dp);

        // vector<int>target = {rides[idx][1], INT_MIN, INT_MIN};
        // int next = lower_bound(rides.begin(), rides.end(), target) - rides.begin();
        int next = findNext(idx+1, rides[idx][1], rides);
        long long take = (rides[idx][1]-rides[idx][0]+rides[idx][2]) + dfs(next, rides, dp);

        return dp[idx] = max(skip, take);
    }

    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        rows = rides.size();
        cols = rides[0].size();
        sort(rides.begin(), rides.end());
        vector<long long>dp(rows, -1);
        return dfs(0, rides, dp);
    }
};