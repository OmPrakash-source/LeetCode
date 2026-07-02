class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>temp = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string>s;
        for(string st : words){
            string str = "";
            for(char ch : st){
                int i = ch - 'a';
                str += temp[i];
            }
            s.insert(str);
        }
    return s.size();
    }
};