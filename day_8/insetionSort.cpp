// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   int a[5]= {4,3,2,1,5};
   int n=5;
   for(int i=0;i<n-1;i++){
       int j=i+1;
       while(j>=1 && a[j]<a[j-1]){
            swap(a[j],a[j-1]);
            j--;
       }
   }
   for(int i=0;i<n;i++){
       cout << a[i] << "  ";
   }

    return 0;
}