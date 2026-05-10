// Last updated: 5/10/2026, 11:49:41 PM
class StockSpanner {
public:
// find a lower or equal previous price of 
    stack<pair<int,int>>st;
    StockSpanner() {}

    int next(int price) {
        int span = 1;
        while(!st.empty() && st.top().first <= price){
            span += st.top().second;
            st.pop();
        }
        st.push({price,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */