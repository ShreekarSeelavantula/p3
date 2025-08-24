Optimized approach

#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:
    int arr[1005];
    int top;

    MyStack() { top = -1; }

    
    void push(int x) {
        if (top < 4) { 
            arr[++top] = x;
        }
    }

    int pop() {
        if (top == -1) return -1;
        return arr[top--];
    }

    int peek() {
        if (top == -1) return -1;
        return arr[top];
    }
};