// Last updated: 5/10/2026, 11:45:27 PM
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();

        for(int i = 0; i < n; i++){
            int idx = i;

            for(int j = i + 1; j < n; j++){
                if(score[j][k] > score[idx][k]){
                    idx = j;
                }
            }

            swap(score[i], score[idx]);
        }

        return score;
    }
};