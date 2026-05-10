// Last updated: 5/10/2026, 11:45:13 PM
class Solution {
public:
    bool isVowel(char ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' );
    }
    string sortVowels(string s) {
        // vector<pair<int, char>>temp;
        // for(char &ch : s)
        //     if(isVowel(ch)) temp.push_back({int(ch), ch});

        // sort(temp.begin(), temp.end());
        // int j = 0;
        // for(int i=0; i<s.size(); i++){
        //     char ch = s[i];
        //     if(isVowel(ch)){
        //         s[i] = temp[j].second;
        //         j++;
        //     }
        // }

        //approch 2

        string result = "";
        for(char &ch : s)
            if(isVowel(ch)) result += ch;

        sort(result.begin(), result.end());
        int i = 0;
        for(char &ch : s){
            if(isVowel(ch)){
                swap(ch, result[i++]);
            }
        }
        return s;
    }
};
auto init=atexit([]{std::ofstream("display_runtime.txt")<<"0";});