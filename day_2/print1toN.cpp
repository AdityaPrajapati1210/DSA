#include<iostream>
using namespace std;

int powers(int a ,int b){
    if(b<1){
        return 1;

    }else{
        return a *powers( a,b-1);
    }
}


int main(){
    int a = 2 , b= 9;
    int result = powers(a,b);
    cout << result << endl;
}