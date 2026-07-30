class Solution {
public:
    int minimumPushes(string word) {

        int n = word.size();
        int full = n / 8;
        int rem = n % 8;

        return 8 * full * (full + 1) / 2 + rem * (full + 1);


        // int sum = 0;
        // int multi = 1;
        // int cnt = 0;
        // for(char ch : word){
        //     if(sum != 0 && sum % 8 == 0){
        //         sum = 0;
        //         multi += 1;
        //     }
        //     sum++;
        //     cnt += multi;
        // }
        // return cnt;
    }
};