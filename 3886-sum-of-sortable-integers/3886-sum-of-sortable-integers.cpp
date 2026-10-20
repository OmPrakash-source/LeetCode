class Solution {
public:
    bool isSorted(vector<int>&nums){
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] > nums[i]) return false;
        }
        return true;
    }

    void leftRotate(vector<int>& nums, int start, int end) {
        int first = nums[start];

        for (int i = start; i < end; i++)
            nums[i] = nums[i + 1];

        nums[end] = first;
    }
    int sortableIntegers(vector<int>& nums) {
        // int n = nums.size();
        // int ans = 0;
        // for(int i=1; i<=n; i++){
        //     if(n % i != 0) continue;

        //     vector<int>temp;
        //     bool possible = true;
        //     int k  = i;
        //     int start = 0;
        //     while (start < n) {
        //         vector<int>singleBlock(nums.begin()+start, nums.begin()+start+k);
        //         int j = 0;
        //         bool found = false;
        //         while(j < k){
        //             if(isSorted(singleBlock)){
        //                 found = true;
        //                 break;
        //             }
        //             leftRotate(singleBlock, 0, k-1);
        //             j++;
        //         }
        //         if(!found){
        //             possible = false;
        //             break;
        //         }
        //         temp.insert(temp.end(), singleBlock.begin(), singleBlock.end());
        //         start += k;
        //     }
        //     if(possible && isSorted(temp)) ans += i;
        // }
        // return ans; 



        int n = nums.size();
        int ans = 0;

        for (int k = 1; k <= n; k++) {
            if (n % k != 0) continue;

            bool possible = true;
            int prevMax = -1;

            for (int start = 0; start < n; start += k) {
                int descents = 0;

                for (int j = start + 1; j < start + k; j++) {
                    if (nums[j - 1] > nums[j])
                        descents++;
                }

                if (start + k - start > 1 &&
                    nums[start + k - 1] > nums[start]) {
                    descents++;
                }

                if (descents > 1) {
                    possible = false;
                    break;
                }

                int mn = nums[start], mx = nums[start];

                for (int j = start + 1; j < start + k; j++) {
                    mn = min(mn, nums[j]);
                    mx = max(mx, nums[j]);
                }

                if (start > 0 && prevMax > mn) {
                    possible = false;
                    break;
                }

                prevMax = mx;
            }

            if (possible) ans += k;
        }

        return ans;
    }
};