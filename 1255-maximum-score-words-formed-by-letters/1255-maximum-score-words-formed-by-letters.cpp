class Solution {
public:
    int func(vector<string>& words, int freq[], map<char, int>& mpp, int idx){
        if(idx == words.size()) return 0;

        int skip = func(words, freq, mpp, idx+1);
        string word = words[idx];

        int temp[26];
        for (int i = 0; i < 26; i++) temp[i] = freq[i]; //Copy freq

        bool canForm = true;
        int result = 0;
        for (char ch : word) {
            if (temp[ch - 'a'] == 0) {
                canForm = false;
                break;
            }
            result += mpp[ch];
            temp[ch - 'a']--;
        }
        int take = 0;
        if(canForm){
            for (char ch : word) freq[ch - 'a']--;
            
            take = result + func(words, freq, mpp, idx + 1);
            
            for (char ch : word) freq[ch - 'a']++;
        }

        return max(take, skip);
    } 
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        int freq[26] = {0};
        for(char ch : letters)freq[ch - 'a']++;

        map<char, int> mpp;
        int j = 0;
        for (int i = 0; i < 26; i++) {
            mpp['a' + i] = score[i];
        }
        
        return func(words, freq, mpp, 0);
    }
};