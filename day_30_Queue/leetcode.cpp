#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;   // create a queue

    // push elements
    q.push(12);
    q.push(34);
    q.push(56);
    q.push(78);
    q.push(90);
    // q.pop();
    q.push(100);

    // print current queue
    cout << "Queue elements: ";
    queue<int> temp = q;  // copy to print (since queue has no iterator)
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // pop one element
    q.pop();

    // print again
    cout << "After one pop: ";
    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // check front element
    cout << "Front element: " << q.front() << endl;

    return 0;
}
