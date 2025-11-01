#include<iostream>
#include<stack>
using namespace std;

void insertSort(stack<int> &s,int element){
    // basecase

    if(s.empty() || (!s.empty() && (s.top() <= element))){
        s.push(element);
        return;
    }

    //store top element
    int temp =  s.top();
    s.pop();

    insertSort(s,element);

    s.push(temp);
}


void sortStack(stack<int>&s){
    // basecase
    if(s.empty()){
        return;
    }

    int temp =  s.top();
    s.pop();

    sortStack(s);

    insertSort(s,temp);
}


int main() {
    stack<int> st;

    // Elements: 1, 3, 2, 4
    st.push(1);
    st.push(66);
    st.push(3);
    st.push(49);
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