/*
// implementing stack using single quque 
#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    // Constructor
    MyStack() {}

    // Push element x onto stack
    void push(int x) {
        q.push(x);
        int size = q.size();
        // Rotate the queue to bring new element to the front
        for (int i = 1; i < size; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    // Removes the element on top of the stack
    int pop() {
        if (!q.empty()) {
            int val = q.front();
            q.pop();
            return val;
        }
        return -1; // Stack underflow
    }

    // Get the top element
    int top() {
        if (!q.empty())
            return q.front();
        return -1; // Stack is empty
    }

    // Return whether the stack is empty
    bool empty() {
        return q.empty();
    }
};

*/