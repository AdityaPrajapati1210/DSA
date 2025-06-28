// count the number of ways stairpath if single ,double and triple stair are allowed.
#include <iostream>
using namespace std;

int stairpath(int n){
    if(n==0) return 1;
    if(n==1 || n==2) return n;
    int total_ways = stairpath(n-1)+ stairpath(n-2)+ stairpath(n-3);
    return total_ways;
}

int main() {
   int n= 5;
   int result = stairpath(n);
   cout << result<< endl;
}
