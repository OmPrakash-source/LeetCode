class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i=0, j=0, n=s.size();
        int count = 0;
        int win = INT_MAX;
        string result = "";
        while(j < n){
            if(s[j] == '1') count++;

            while (i <= j && count > k){
                if(s[i] == '1')
                    count--;
                i++;
            }
            while(s[i] == '0') i++;

            if(count == k){
                int len = j-i+1;
                string curr = s.substr(i, len);
                if(len < win || (curr < result && len == win)){
                    win = len;
                    result = curr;
                }
            }
            j++;
        }
        return result;
    }
};