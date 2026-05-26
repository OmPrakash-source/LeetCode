// Last updated: 5/26/2026, 2:41:48 PM
class Solution {
public:
    int numberOfSpecialChars(string word) {
        // unordered_map<char,int>mpp;
        // for(const char &ch : word) mpp[ch]++;
        // int count = 0;
        // for(const char &ch : word){
        //     char letter = ' ';
        //     if(ch >= 'a' && ch <= 'z'){
        //         int diff = ch - 'a';
        //         letter = 'A' + diff;
        //         if(mpp.find(letter) != mpp.end())count++;
        //     }else{
        //         int diff = ch - 'A';
        //         letter = 'a' + diff;
        //         if(mpp.find('a' + diff) != mpp.end())count++;
        //     }
        //     mpp.erase(ch);
        //     mpp.erase(letter);
        // }
        // return count;

        vector<bool>smaller(26, false), bigger(26, false);
        for(char ch : word){
            if(ch >= 'a' && ch <= 'z') smaller[ch - 'a'] = true;
            else bigger[ch - 'A'] = true;
        }
        int count = 0;
        for(int i=0; i<26; i++){
            if(smaller[i] && bigger[i]) count++;
        }
        return count;
    }
};