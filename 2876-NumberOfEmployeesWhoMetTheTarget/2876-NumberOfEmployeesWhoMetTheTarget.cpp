// Last updated: 5/10/2026, 11:45:15 PM
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int c = 0;
        for(int i : hours) if(i >= target) c++;
        return c;
    }
};