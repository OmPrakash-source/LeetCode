class Solution {
public:
    int findNext(vector<vector<int>>& events, int st, int target){
        int ans = events.size();
        int end = events.size()-1;

        while(st <= end){
            int mid = st + (end-st)/2;
            if(events[mid][0] > target){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
    int func(int idx, int k, vector<vector<int>>& events, vector<vector<int>>&dp){
        if(idx >= events.size() || k <= 0) return 0;

        if(dp[idx][k] != -1) return dp[idx][k];

        int skip = func(idx+1, k, events, dp);

        // vector<int>target = {events[idx][1] , INT_MAX, INT_MAX};
        // int next = upper_bound(events.begin() + idx + 1, events.end(), target) - events.begin();

        int next = findNext(events, idx+1, events[idx][1]);

        int take = events[idx][2] + func(next, k - 1, events, dp);

        return dp[idx][k] = max(take, skip);
    }
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        int m = events[0].size();

        sort(events.begin(), events.end());
        vector<vector<int>>dp(n+1, vector<int>(k+1, -1));

        return func(0, k, events, dp);
    }
};