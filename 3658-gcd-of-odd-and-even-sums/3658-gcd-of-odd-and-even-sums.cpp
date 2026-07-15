class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even = 0, odd = 0;
        int i = 1;
        int j = 1;
        while(i <= n){
            even += j++;
            odd += j++;

            i++;
        }
        int mini = min(even, odd);
        for(int k = mini/2; k>=2; k--){
            if(even % k == 0 && odd % k == 0) return k;
        }
        return 1;
    }
};