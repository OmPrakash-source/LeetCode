// Last updated: 5/10/2026, 11:46:59 PM
class Solution {
public:
    int numWaterBottles(int b, int e) {
        int ans = b;
        int empty = b;
        while(empty >= e){
            int newbottle = empty/e;
            ans += newbottle;
            empty = newbottle + (empty % e);
        }
        return ans;
    }
};