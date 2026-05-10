// Last updated: 5/10/2026, 11:52:19 PM
class MyStack {
public:
    MyStack() {
        
    }
    deque<int>q;
    void push(int x) {
        q.push_front(x);
    }
    
    int pop() {
        int temp = q.front();
        q.pop_front();
        return temp;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */