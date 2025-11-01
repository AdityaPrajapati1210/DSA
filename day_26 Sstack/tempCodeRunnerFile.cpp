#include<iostream>
#include<stack>
using namespace std;
stack<int> st;

void deleteElementUntil(stack<int>st,int current , int middle){
    if(current == middle){
        st.pop();
        return;
    }