// Last updated: 5/10/2026, 11:53:07 PM
class MinStack {
    stack<int> st;
    stack<int> mSt;
public:
    MinStack() {}
    void push(int val) {
        st.push(val);
        if(mSt.empty() || val <= mSt.top()){
            mSt.push(val);
        }
    }

    void pop() {
        if(st.top() == mSt.top()){
            mSt.pop();
        } st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return mSt.top();
    }
};
