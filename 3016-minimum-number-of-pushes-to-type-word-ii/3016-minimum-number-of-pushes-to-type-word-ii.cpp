class Solution {
public:
    int minimumPushes(string word) {
        // unordered_map<char,int>mpp;
        // for(char ch : word) mpp[ch]++;

        // vector<int>freq;
        // for(auto it : mpp) freq.push_back(it.second);
        // sort(freq.begin(),freq.end(), greater<int>());
        // int ans = 0;
        // for(int i=0; i<freq.size(); i++){
        //     ans += freq[i] * (i/8 + 1);
        // }
        // return ans;


        // int ans = 0;
        vector<int>freq(26, 0);
        for(char ch : word) freq[ch - 'a']++;
        sort(freq.begin(),freq.end(), greater<int>());
        int ans = 0;
        for(int i=0; i<freq.size(); i++){
            if(freq[i] == 0) continue;
            ans += freq[i] * (i/8 + 1);
        }
        return ans;
    }
};