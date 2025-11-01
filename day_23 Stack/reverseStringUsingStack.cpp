#include<iostream>
#include<stack>
#include<string>

using namespace std;
int main(){
    // create string
    string str="aditya";
    // create stack 
    stack<char> s;

    // push element in the stack.......
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }

    // change stack into string
    string ans="";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << ans << endl;


}