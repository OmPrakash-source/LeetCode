    class Solution {
    public:
        vector<string> findWords(vector<string>& words) {
            unordered_set<char> r1 = {'q','w','e','r','t','y','u','i','o','p'};
            unordered_set<char> r2 = {'a','s','d','f','g','h','j','k','l'};
            unordered_set<char> r3 = {'z','x','c','v','b','n','m'};
            vector<string>result;
            for(const string &str : words){
                bool flag = true;
                int row = -1;
                int currow = 0;
                for(char c : str){
                    c = tolower(c);
                    if(r1.contains(c)) currow = 1;
                    else if(r2.contains(c)) currow = 2;
                    else currow = 3;
                    if(row == -1) row = currow;
                    else if(row != currow){
                        flag = false;
                        break;
                    }
                }
                if(flag) result.push_back(str);
            }
            return result;
        }
    };