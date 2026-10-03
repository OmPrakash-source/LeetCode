class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> store(n);

        for (int i = 1; i <= n; i++)
            store[i - 1] = i;

        int i = 0;
        int cnt = 1;

        while (store.size() > 1) {

            if (cnt >= k) {
                store.erase(store.begin() + i);
                cnt = 1;

                if (i >= store.size())
                    i = 0;
            }
            else {
                i++;

                if (i >= store.size())
                    i = 0;

                cnt++;
            }
        }

        return store[0];
    }
};
