// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void tower(int n ,char s , char h , char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    cout << s << "->" << d << endl;
    tower(n-1,h,s,d);
    return;
}

int main(){
    int n=3;
    tower(n,'A','B','C');
}