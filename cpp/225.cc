class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        q1.push_back(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        q1.pop_back();
    }

    // Get the top element.
    int top() {
        return q1.back();
    }

    // Return whether the stack is empty.
    bool empty() {
        return q1.empty();
    }
    private:
        deque<int> q1;
};