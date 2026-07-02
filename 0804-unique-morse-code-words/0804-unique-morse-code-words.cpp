class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>temp = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string>s;
        for(string st : words){
            string str = "";
            for(char ch : st) str += temp[ch - 'a'];
            s.insert(str);
        }
    return s.size();
    }
};