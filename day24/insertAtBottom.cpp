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
  
int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int x;
    cout << "Enter the number want to insert at bottom : ";
    cin >> x ;
    
    solve(s,x);

    while(!s.empty()){
        cout << s.top() <<endl;
        s.pop();
    }


}