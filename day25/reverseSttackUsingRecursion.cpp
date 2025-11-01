#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int> &s,int num){
    // base case
    if(s.empty()){
        s.push(num);
        return;
    }

    int temp = s.top();
    s.pop();

    solve(s,num);
    s.push(temp);
}

void reverseStack(stack<int> &s){
    // basecase
    if(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();
f
    reverseStack(s);

    s.push(temp);
}

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);



    reverseStack(s);

    while(!s.empty()){
        cout << s.top() <<endl;
        s.pop();
    }

    


}