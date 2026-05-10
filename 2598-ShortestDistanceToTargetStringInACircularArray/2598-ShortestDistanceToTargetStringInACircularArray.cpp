// Last updated: 5/10/2026, 11:45:33 PM
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int st) {
    int n = words.size();

    for(int i = 0; i < n; i++){
        if(words[(st + i) % n] == target ||
           words[(st - i + n) % n] == target){
            return i;
        }
    }
    return -1;
}
};