// Last updated: 5/10/2026, 11:45:03 PM
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0, count = 0;
        for(int i : apple) sum += i;
        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(), capacity.end());
        
        for(int i=0; i<capacity.size(); i++){
            sum -= capacity[i];
            count++;
            if(sum <= 0)
                break;
        }
        return count;
    }
};