// Last updated: 5/10/2026, 11:53:32 PM
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int bal = 0, def = 0, st = 0;
        for(int i=0; i<gas.size(); i++){
            bal += gas[i] - cost[i];
            if(bal < 0){
                def += bal; // jo bhi val nagative me aai wo defisit hogi
                st = i+1; //jaha pe falt huaa uske next se restart
                bal = 0;    // new me bal fir 0 
            }
        }
        if(bal + def >= 0) return st;
        else return -1;
    }
};