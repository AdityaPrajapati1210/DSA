#include <iostream>
using namespace std;

class Stack {
public:
    int top;
    int size;
    int *arr;

    // constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return -1;
        } else {
            int val = arr[top];
            top--;
            return val;
        }
    }

    bool empty() {
        return (top == -1);
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
};

int main() {
    Stack s(5);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "After pop, new top: " << s.peek() << endl;

    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    for(int i= s.top ; s.top >=0;s.top--){
        cout << s.arr[s.top] << endl;
    }

    return 0;

}
