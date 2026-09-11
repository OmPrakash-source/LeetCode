class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count = 0;
        unordered_map<int, int> mpp;

        for(int i : digits) 
            mpp[i]++;

        for(int i = 1; i < 10; i++) {
            if(mpp[i] > 0) {
                mpp[i]--;

                for(int j = 0; j < 10; j++) {
                    if(mpp[j] > 0) {
                        mpp[j]--;

                        for(int k = 0; k <= 8; k += 2) {
                            if(mpp[k] > 0) {
                                count++;
                            }
                        }

                        mpp[j]++;  // Restore j
                    }
                }

                mpp[i]++;  // Restore i
            }
        }

        return count;
    }
};