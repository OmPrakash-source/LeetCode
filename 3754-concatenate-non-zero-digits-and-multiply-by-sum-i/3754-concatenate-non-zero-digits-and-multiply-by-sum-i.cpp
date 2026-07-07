class Solution {
public:
    long long sumAndMultiply(int n) {
        string st = to_string(n);
        long long val = 0;
        long long sum = 0;
        for(char ch : st){
            if(ch == '0')continue;
            val = val * 10 + (ch - '0');
            sum += (ch - '0');
        }
        return (long long)(val * sum);
    }
};