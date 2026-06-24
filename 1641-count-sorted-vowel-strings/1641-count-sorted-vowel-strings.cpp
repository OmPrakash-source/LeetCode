class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>arr(5, 1);
        for(int i=1; i<n; i++){
            for(int j=1; j<=4; j++){
                arr[j] += arr[j-1];
            }
        }
        int sum = 0;
        for(int i : arr) sum += i;
        return sum;
    }
};