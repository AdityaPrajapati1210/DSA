#include<iostream>
#include<stack>
using namespace std;
stack<int> st;

void deleteElementUntil(stack<int>&st,int current , int middle){
    if(current == middle){
        st.pop();
        return;
    }

    int temp = st.top();
    st.pop();

    deleteElementUntil(st,current+1,middle);

    st.push(temp);
}


void deleteMiddle(){

    int middle = st.size()/2;
    int current = 0;
    deleteElementUntil(st,current,middle);
}

int main(){

    st.push(1);
    st.push(66);
    st.push(3);
    st.push(49);
    st.push(2);
    st.push(4);

    deleteMiddle();

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
};