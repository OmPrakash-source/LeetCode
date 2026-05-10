// Last updated: 5/10/2026, 11:45:28 PM
class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>store;
        while(n > 0){
            store.push_back(n%10);
            n /= 10;
        }
        reverse(store.begin(),store.end());
        int sum = 0;
        int point = 1;
        for(int i : store){
            if(point % 2 == 1)
                sum += i;
            else 
                sum -= i;
            point++;
        }
        return sum;
    }
};