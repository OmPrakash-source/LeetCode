class Solution {
public:
    int func(long long n){
        if(n <= 1) return 0;
        if(n % 2 == 0)return 1 + func(n/2);
        return min(func(n+1), func(n-1)) + 1;
    }
    int integerReplacement(int n) {
        int count = 0;

        
        // while(n > 1){
        //     if(n%2 != 0){
        //         n = n+1;
        //         count++;
        //         cout<<count<<" "<<n<<endl;
        //         continue;
        //     }
        //     n /= 2;
        //     count++;
        //     cout<<count<<" "<<n<<endl;
        // }
        
        return func(n);
    }
};