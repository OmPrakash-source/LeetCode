// Last updated: 5/10/2026, 11:45:07 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& s, char x) {
        vector<int>result;
        int i=0;
        for(const string &str : s){
            for(char ch : str){
                if(ch == x){
                    result.push_back(i);
                    break;
                }
            }
            i++;
        }
        return result;
    }
};