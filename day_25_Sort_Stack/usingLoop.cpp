#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<int> &st){
    stack<int> tempStack;

    while (!st.empty()) {
        // Pop out the first element
        int curr = st.top();
        st.pop();

        // Move elements from tempStack back to st if they are greater
        while (!tempStack.empty() && tempStack.top() > curr) {
            st.push(tempStack.top());
            tempStack.pop();
        }

        // Push current element into tempStack
        tempStack.push(curr);
    }

    // Transfer sorted elements back to original stack
    while (!tempStack.empty()) {
        st.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    stack<int> st;

    // Elements: 1, 3, 2, 4
    st.push(1);
    st.push(3);
    st.push(2);
    st.push(4);

    sortStack(st);

    cout << "Sorted Stack (Top to Bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
