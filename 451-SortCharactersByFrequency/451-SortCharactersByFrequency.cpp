// Last updated: 5/10/2026, 11:51:04 PM
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>map;
        string ans = "";
        for(char ch:s){
            map[ch]++;
        }
        while(!map.empty()){
            int maxFreq = INT_MIN;
            char maxChar = '\0';
            for(auto p : map){
                if(p.second > maxFreq){
                    maxFreq = p.second;
                    maxChar = p.first;
                }
            }
                ans += string(maxFreq, maxChar);
                map.erase(maxChar);
        }
        return ans;
    }
};