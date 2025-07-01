// find maximum element in each sliding window .but this is not optimise approach.
#include <iostream>
#include <algorithm>
using namespace  std;

int main() {
    int n=7;
    int k=2;
    int arr[n]={1,2,3,5,2,1,0};
    for(int i = 0;i<n-k+1;i++){
        int maximum =-999;
        for(int j=i;j<i+k;j++){
            maximum = max(maximum,arr[j]);
        }
        cout << maximum << " ";
    }
    
    

    return 0;
}