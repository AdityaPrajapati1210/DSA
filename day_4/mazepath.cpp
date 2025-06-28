// Maze path using grid find the possible path..
#include <iostream>
using namespace std;

int maize(int cr , int cc , int er ,int ec){
    int downways =0 ,rightways =0;
    if(cr == er && cc == ec){
        return 1;
    }
    if(cr == er){
        rightways += maize(cr,cc+1,er,ec);
    }
    if(cc == ec){
        downways  += maize(cr+1,cc,er,ec);
    }
    if(cc<ec && cr<er){
    rightways += maize(cr,cc+1,er,ec);
    downways += maize(cr+1,cc,er,ec);
        
    }
    int totalways  =  rightways + downways;
    return totalways;
}
int main() {
   int n= 3,m=3;
   int result = maize(1,1,n,m);
   cout << result<< endl;
}