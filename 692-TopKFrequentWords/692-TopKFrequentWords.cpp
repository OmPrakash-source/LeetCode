// Last updated: 5/10/2026, 11:50:20 PM
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<pair<int,string>>nums;
        
        for(string &s : words){
            bool flag = true;
            for(int i=0; i<nums.size();i++){
                if(s == nums[i].second){
                    nums[i].first++;
                    flag = false;
                    break;
                }
            }
            if(flag){
                nums.push_back({1,s});
            }
        }
        sort(nums.begin(), nums.end(), [](auto &a, auto &b){
            if(a.first == b.first)
                return a.second < b.second;
            return a.first > b.first;
        });
        vector<string>st;
        for(int i=0; i<k ;i++){
            st.push_back(nums[i].second);
        }
        return st;
    }
};