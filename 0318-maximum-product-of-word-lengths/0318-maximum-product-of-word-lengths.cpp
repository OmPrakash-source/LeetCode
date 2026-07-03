class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxi = 0;
        for(int i=0; i<words.size(); i++){
            string s = words[i];
            unordered_set<char>st(s.begin(), s.end());
            for(int j=i+1; j<words.size(); j++){
                bool isHave = true;
                for(char ch : words[j]){
                    if(st.count(ch)){
                        isHave = false;
                        break;
                    }
                }
                if(isHave){
                    maxi = max(maxi, int(words[i].size() * words[j].size()));
                }
            }
        }
        return maxi;  
    }
};