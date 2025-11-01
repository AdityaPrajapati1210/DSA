#include<iostream>
#include<stack>
using namespace std;
int main(){

    // create stack 
    stack<int> num;

    // push element in the stack
    num.push(2);
    num.push(3);

    // pop elements from the stack
    num.pop();

    // print the stack top element
    cout <<"Printing the stack top element : " << num.top() <<endl;

    if(num.empty())
        cout << "Stack is empty"<< endl;
    else
        cout << "Stack is not empty " << endl;

    
    cout << "size of the stack : "<< num.size()<< endl;

    

}