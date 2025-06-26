#include<iostream>
using namespace std;

int print(int n){
    if(n == 0) return;
    print(n-1);
    cout << n << endl;
    return;
}

int main(){
    int n = 6;
    print(n);
}