class Solution {
    int n;
    int findNext(int st, int target, vector<vector<int>> &value){
        int result = n;
        int end = n-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(value[mid][0] >= target){
                result = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return result;
    }

    int dfs(int idx, vector<vector<int>> &value, vector<int>&dp){
        if(idx >= n) return 0;

        if(dp[idx] != -1) return dp[idx];
        int skip = dfs(idx+1, value, dp);
        int next = findNext(idx+1, value[idx][1], value);
        int take = value[idx][2] + dfs(next, value, dp);
        return dp[idx] = max(take, skip);
    }
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        n=startTime.size();
        vector<vector<int>>value(n, vector<int>(3, 0));
        for(int i=0; i<n; i++){
            value[i][0] = startTime[i];
            value[i][1] = endTime[i];
            value[i][2] = profit[i];
        }

        sort(value.begin(), value.end());
        vector<int>dp(n, -1);

        return dfs(0, value, dp);

    }
};