class Solution {
public:

    int dayOfYear(string s){
        vector<int>cal = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int month = stoi(s.substr(0, 2));
        int day = stoi(s.substr(3, 2));

        int total = day;
        for(int i=0; i<month-1; i++){
            total += cal[i];
        }
        return total;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        


        int aStart = dayOfYear(arriveAlice);
        int aEnd   = dayOfYear(leaveAlice);
        int bStart = dayOfYear(arriveBob);
        int bEnd   = dayOfYear(leaveBob);


        int cnt = 0;

        for(int i=1; i<=365; i++){
            bool isAlice = (i >= aStart && i <= aEnd);
            bool isBob = (i >= bStart && i <= bEnd);

            if(isAlice && isBob) cnt++;
        }
        return cnt;


    }
};