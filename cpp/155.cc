class MinStack {
public:
    void push(int x) {
        if(s.empty())
        {
            sm.push(x);
        }
        else
        {
            if(x <= sm.top())
                sm.push(x);
        }
        s.push(x);
    }

    void pop() {
        if(s.top() <= sm.top())
            sm.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return sm.top();
    } 
    private:
        stack<int> s;
        stack<int> sm;
};