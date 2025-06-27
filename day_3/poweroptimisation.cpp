// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int powers(int a, int b){

   if (b==1) return a;
   int x = powers(a,b/2);
   int ans = x*x;
   if(b%2 == 1) return ans*a;
    else return ans;
}

int main() {
    int a,b;
   cout << " Enter the base : ";
   cin >> a;
   cout << "Enter the power : ";
   cin >> b;
   int result = powers(a,b);
   cout << result<< endl;
}