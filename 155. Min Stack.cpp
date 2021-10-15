#include <iostream>
#include <stack>
#include <algorithm>


class MinStack {
public:
    std::stack<int> st, stmin;

    void push(int val) {
        st.push(val);
        if (stmin.empty()) stmin.push(val);
        else stmin.push(std::min(val, stmin.top()));
    }

    void pop() {
        st.pop(), stmin.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return stmin.top();
    }
};

int main()
{

}