#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:
    int arr[1005];
    int size = 0; 

   
    void push(int x) {
        if (size < 5) { 
            arr[size++] = x;
        }
    }

    
    int pop() {
        if (size == 0) return -1;
        int topElement = arr[size - 1];

        
        size--;
        for (int i = size; i < 1000; i++) {
            arr[i] = arr[i + 1];
        }
        return topElement;
    }

    
    int peek() {
        if (size == 0) return -1;
        return arr[size - 1];
    }
};



