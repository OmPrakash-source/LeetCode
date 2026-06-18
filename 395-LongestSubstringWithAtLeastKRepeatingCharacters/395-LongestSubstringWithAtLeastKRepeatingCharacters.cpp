// Last updated: 6/18/2026, 4:23:49 PM
class Solution {
public:

    
        int solve(string s, int k) {

        // count frequencies in current string
        unordered_map<char, int> freq;
        for(char ch : s)
            freq[ch]++;

        // find invalid character
        for(char ch : s) {

            // this char cannot be part of valid answer
            if(freq[ch] < k) {

                // split around invalid char
                int idx = s.find(ch);

                // solve left and right parts
                int left = solve(s.substr(0, idx), k);
                int right = solve(s.substr(idx + 1), k);

                return max(left, right);
            }
        }

        // all chars valid
        return s.size();
    }


    int longestSubstring(string s, int k) {
        int result = 0;

        // Approach 1
        // for(int i=0; i<s.size(); i++){
        //     vector<int>mpp(26, 0);
        //     for(int j=i; j<s.size(); j++){
        //         mpp[s[j] - 'a']++;
        //         bool flag = true;
        //         for(int &it : mpp){
        //             if(it > 0 && it < k){
        //                 flag = false;
        //                 break;
        //             }
        //         }
        //         if(flag)
        //             result = max(result, j-i+1);
        //     }
        // }

        // approach 2
        if(s.size() == 0 || s.size() < k)
            return 0;

        return solve(s, k);
    }
};