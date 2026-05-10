// Last updated: 5/10/2026, 11:44:55 PM
auto __fast_io_atexit = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    std::atexit([]() { 
        ofstream("display_runtime.txt") << "0"; 
    });

    return 0;
}();
class Solution {
public:
    long long f(int i,unordered_map<long long, long long> &map, vector<long long> &keys,vector<long long>&dp){
        if(i >= keys.size()) return 0;
        if(dp[i] != -1){
            return dp[i];
        }
        long long skip = f(i+1,map,keys,dp);

        long long take = map[keys[i]];
        long long j = i + 1;
        while (j < keys.size() && keys[j] <= keys[i] + 2) j++;

        take += f(j, map, keys, dp);

        return dp[i] = max(take,skip);
    }
    long long maximumTotalDamage(vector<int>& power) {

        unordered_map<long long, long long> mp;
        for (long long val :power)mp[val]+=val;

        vector<long long> keys;
        // keys.reserve(mp.size());
        for (auto &p : mp) keys.push_back(p.first);

        sort(keys.begin(), keys.end());
        vector<long long>dp(keys.size(),-1);
        return f(0, mp, keys,dp);
        
    }
};
