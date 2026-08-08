class Solution {
public:
    bool isNum(char ch){
        if(ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9') return true;
        return false;
    }
    string sortSentence(string s) {
        
        vector<pair<int,string>>word;
        string str = "";
        for(char &ch : s){
            if(ch == ' ') continue;
            if(isNum(ch)){
                word.push_back({ch - '0', str});
                str = "";
            }else str += ch;
        }
        sort(word.begin(), word.end());

        str = "";
        int n = 0;
        for(auto &it : word){
            str+=it.second;
            if(n == word.size()-1) break;
            str+=" ";
            n++;
        }
        return str;
    }
};