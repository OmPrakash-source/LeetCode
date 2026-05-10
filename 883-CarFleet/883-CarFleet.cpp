// Last updated: 5/10/2026, 11:49:45 PM
class Solution {
    class Car{
        public:
        int pos, speed;
        Car(int p, int s){
            speed = s;
            pos = p;
        }
    };
    static bool comp(Car &a, Car &b){
        return a.pos<b.pos;
    }
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<Car>cars;
        for(int i=0; i<position.size();i++){
            Car car(position[i], speed[i]);
            cars.push_back(car);
        }
        stack<float>st;
        sort(cars.begin(), cars.end(),comp);
        for(auto car: cars){
            float time = (target - car.pos) / ((float)car.speed);
            while(!st.empty() && time >= st.top()){
                st.pop();
            }
            st.push(time);
        }
        return st.size();
    }
};