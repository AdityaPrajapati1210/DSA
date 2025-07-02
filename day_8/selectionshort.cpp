// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   int a[5]= {4,3,2,1,5};
   int n=5;
   int minn = 999;
   int minIndex;
   for(int i=0;i<n-1;i++){
       for(int j=i;j<n;j++){
           if(minn>a[j]){
               minn = min(minn,a[j]);
               minIndex =j;
           }
           swap(a[minIndex],a[i]);
       }
   }
   for(int i=0;i<n;i++){
       cout << a[i] << "  ";
   }

    return 0;
}