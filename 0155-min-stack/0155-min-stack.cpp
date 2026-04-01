class MinStack {
    stack<int> mainStack;
    stack<int> minStack;

public:
    MinStack() {}
    
    void push(int val) {
        mainStack.push(val);
        
        if (minStack.empty()) {
            minStack.push(val);
        } else {
            minStack.push(min(val, minStack.top()));
        }
    }
    
    void pop() {
        mainStack.pop();
        minStack.pop();
    }
    
    int top() {
        if (mainStack.empty()) return -1;
        return mainStack.top();
    }
    
    int getMin() {
        if (minStack.empty()) return -1;
        return minStack.top();
    }
};
