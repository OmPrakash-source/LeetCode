class Solution {
public:
    string minWindow(string s, string t) {
        // string result = "";
        // int n= s.size();
    //     for(int i=0; i<n; i++){
    //         unordered_map<char,int>mpp;
    //         string str = "";
    //         for(char ch : t) mpp[ch]++;
    //         for(int j=i; j<n; j++){
    //             if(mpp.find(s[j]) != mpp.end()){
    //                 mpp[s[j]]--;
    //                 if(mpp[s[j]] <= 0) mpp.erase(s[j]);
    //             }
    //             if(mpp.empty()) {
    //                 string str = s.substr(i, j - i + 1);
    //                     if(result.empty() || str.size() < result.size())
    //                         result = str;
    //                 break;
    //             }
    //         }
    //     }
    // return result;
        if (s.empty() || t.empty()) return "";
        unordered_map<char,int>mpp;
        for(char ch : t) mpp[ch]++;

        int i=0, j=0, cnt=0, start = -1, n =s.size(), mini = INT_MAX;

        while(j < n){
            if(mpp[s[j]] > 0) cnt++;
            mpp[s[j]]--;

            while(i <= j && cnt == (int)t.size()){
                if(j-i+1 < mini){
                    mini = j-i+1;
                    start = i;
                }
                mpp[s[i]]++;
                if(mpp[s[i]] > 0) cnt--;
                i++;
            }
            j++;
        }
        if(start == -1) return "";
        return s.substr(start, mini);
    }
};