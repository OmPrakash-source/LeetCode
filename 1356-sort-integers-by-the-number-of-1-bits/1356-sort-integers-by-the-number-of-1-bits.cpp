class Solution {
public:
    int cntbit(int n){
        int cnt = 0;
        while(n > 0){
            if(n%2 == 1) cnt++;
            n/=2;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& nums) {
        vector<pair<int,int>>ans;
        for(int i : nums){
            ans.push_back({cntbit(i), i});
        }
        vector<int>result;
        sort(ans.begin(),ans.end());

        for(auto &it : ans){
            result.push_back(it.second);
        }
        return result;
    }
};