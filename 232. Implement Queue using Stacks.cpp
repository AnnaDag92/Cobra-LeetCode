#include <iostream>

class MyQueue {
public:
    int size;
    int arr[100];
    /** Initialize your data structure here. */
    MyQueue() {
        size = 0;
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        arr[size++] = x;
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int a = arr[0];
        for (int i = 1; i < size; ++i) {
            arr[i - 1] = arr[i];
        }
        --size;
        return a;
    }

    /** Get the front element. */
    int peek() {
        return arr[0];
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return size == 0;
    }
};  }
};

int main()
{

}