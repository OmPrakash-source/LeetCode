// Last updated: 5/10/2026, 11:49:54 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        string s2 = s + s;
        return s2.find(goal) < s2.size();
    }
};