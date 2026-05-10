// Last updated: 5/10/2026, 11:45:40 PM
class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>str;

        for (int i=0; i<queries.size(); i++){
            for(int j=0; j<dictionary.size(); j++){
            int count = 0;
                for(int k = 0; k<queries[i].size(); k++){
                    if(queries[i][k] != dictionary[j][k]) count++;
                    if(count > 2) break;
                }
            if(count <= 2){
                 str.push_back(queries[i]);
                 break;
            }
            }
        }
        return str;
    }
};