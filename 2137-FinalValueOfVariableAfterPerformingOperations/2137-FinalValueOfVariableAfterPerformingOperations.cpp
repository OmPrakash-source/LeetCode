// Last updated: 5/10/2026, 11:46:16 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        
        for(auto &s : operations)
            count += (s[1] == '+')?1:-1;
        return count;
    }
};