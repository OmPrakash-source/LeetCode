class Solution {
public:
    int n;
    vector<int>day1Pass;
    vector<int>day2Pass;
    vector<int>day3Pass;
    int bs(vector<int>&days, int st, int target){
        int end = n-1, ans = n;
        while(st <= end ){
            int mid = st + (end-st)/2;
            if(days[mid] >= target){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
    int func(int idx, vector<int>&dp, vector<int>&days, vector<int>&cost){
        if(idx >= n) return 0;

        if(dp[idx] != -1) return dp[idx];
        int takeday1 = cost[0] + func(day1Pass[idx], dp, days, cost);
        int takeday2 = cost[1] + func(day2Pass[idx], dp, days, cost);
        int takeday3 = cost[2] + func(day3Pass[idx], dp, days, cost);
        return dp[idx] = min({takeday1, takeday2, takeday3});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        n = days.size();
        day1Pass.resize(n, n+1);
        day2Pass.resize(n, n+1);
        day3Pass.resize(n, n+1);
        for(int i=0; i<n; i++){
            // day1Pass[i] = lower_bound(days.begin(), days.end(), days[i]+1) - days.begin();
            // day2Pass[i] = lower_bound(days.begin(), days.end(), days[i]+7) - days.begin();
            // day3Pass[i] = lower_bound(days.begin(), days.end(), days[i]+30) - days.begin();

            day1Pass[i] = bs(days, i+1, days[i]+1);
            day2Pass[i] = bs(days, i+1, days[i]+7);
            day3Pass[i] = bs(days, i+1, days[i]+30);
        }
        vector<int>dp(n+1, -1);
        return func(0, dp, days, costs);
    }
};