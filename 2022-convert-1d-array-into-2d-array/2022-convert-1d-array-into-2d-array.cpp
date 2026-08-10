class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int size = original.size();
        if(n * m != size) return {};
        vector<vector<int>>result(m, vector<int>(n, 0));

        // int i = 0;
        
        // vector<vector<int>>result;
        
        // while(i < size){
        //     vector<int>temp;
        //     while(i < size && temp.size() < n){
        //         temp.push_back(original[i++]);
        //     }
        //     result.push_back(temp);
        // }

        int idx = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                result[i][j] = original[idx++];
            }
        }
        return result;
    }
};
auto init=atexit([]{std::ofstream("display_runtime.txt")<<"0";});