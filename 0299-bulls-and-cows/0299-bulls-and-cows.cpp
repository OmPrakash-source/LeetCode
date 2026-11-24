class Solution {
public:
    string getHint(string secret, string guess) {
        int bullsCnt = 0, cowCnt = 0, n=secret.size();
        vector<int>s(10, 0), g(10, 0);

        for(int i=0; i<n; i++){
            if(secret[i] == guess[i]) bullsCnt++;
            else{
                s[secret[i] - '0']++;
                g[guess[i] - '0']++;
            }
        }

        for(int i=0; i<10; i++){
            cowCnt += min(s[i], g[i]);
        }
        return to_string(bullsCnt) + "A" + to_string(cowCnt) + "B";
        
    }
};