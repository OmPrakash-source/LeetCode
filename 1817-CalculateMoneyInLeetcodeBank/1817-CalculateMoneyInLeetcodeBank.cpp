// Last updated: 5/10/2026, 11:46:45 PM
class Solution {
public:
    int totalMoney(int n) {
        // 
        int amount = 0;
    
		for(int i=0; i<n; i++){
			amount += i%7 + i/7 + 1;    
		}
		return amount;
    }
};