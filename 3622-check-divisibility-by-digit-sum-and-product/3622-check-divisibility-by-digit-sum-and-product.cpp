class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum = 0;
        long long multi = 1;

        int temp = n;

        while(temp > 0){
            sum += temp%10;
            multi *= temp%10;
            temp /= 10;
        }
        return n % (sum + multi) == 0;
    }
};