class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string pre = "";
        sort(s.begin(), s.end());
        int i = 0;
        string first = s.front();
        string last = s.back();
        while(i < first.size() && i < last.size() && first[i] == last[i]){
            i++;
        }
        return last.substr(0, i);
    }
};