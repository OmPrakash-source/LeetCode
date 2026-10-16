class Solution {
public:
    int func(int idx, vector<string>& words, vector<int>freq, unordered_map<char, int> &mpp){
        if(idx == words.size()) return 0;
        int skip = func(idx+1, words, freq, mpp);

        vector<int>temp = freq;
        string word = words[idx];
        int result = 0;
        bool flag = true;
        for(char ch : word){
            if(temp[ch - 'a'] == 0){
                flag = false;
                break;
            }
            result += mpp[ch];
            temp[ch-'a']--;
        }
        
        
        int take = 0;
        if(flag){
            for(char ch : word) freq[ch - 'a']--;
            take = result + func(idx+1, words, freq, mpp);
            for(char ch : word) freq[ch - 'a']++;
        }
        return max(take, skip);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int>freq(26, 0);
        for(char ch : letters) freq[ch - 'a']++;
        unordered_map<char, int>mpp;
        for(int i=0; i<26; i++) mpp['a' + i] = score[i];

        return func(0, words, freq, mpp);
    }
};