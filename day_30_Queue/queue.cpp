#include <iostream>
using namespace std;

class queue1 {
public:
    int *arr;
    int rear;
    int front;
    int size;

    // Constructor
    queue1(int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) arr[i] = 0;
        rear = -1;
        front = -1;
    }

    // Push function
    void push(int val) {
        if (rear == size - 1) {
            cout << "Queue is already full" << endl;
        } else {
            if (front == -1) front = 0; // first element
            arr[++rear] = val;
        }
    }

    // Pop function
    void pop() {
        if (front == -1) {
            cout << "No element in the queue" << endl;
        } else {
            int j = 0;
            while(j <= rear){
                arr[j] = arr[j+1];
                
                if(j== rear){
                    arr[j] = 0;
                    rear--;
                }
                j++;
            }

        }
    }

    // Print function
    void print() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    queue1 abc(5); // Correct object creation

    abc.push(12);
    abc.push(34);
    abc.push(56);
    abc.push(56);
    abc.push(56);

    abc.print();

    abc.pop();
    abc.print();
    abc.push(56);
    abc.print();



    return 0;
}
