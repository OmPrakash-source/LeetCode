class Solution {
public:
    int pro(int temp){
        int prod = 1;
        while(temp > 0){
            prod *= (temp%10);
            temp /= 10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        int i = n;
        while(i <= i+10){
            if(pro(i) % t == 0) return i;
            i++;
        }
        return 0;
    }
};