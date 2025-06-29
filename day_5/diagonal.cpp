// find maximum column sum  of a perticular column.
#include<iostream>
#include<algorithm>
using namespace std;

int daiSum( int arr[][3],int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i][i];
        if(i != n-1-i){
            sum += arr[i][n-1-i];
        }
    }
    return sum;
}

int main(){
    int n=3,m=3;
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int result = daiSum(arr,n,m);
    cout << result;
    return 0;
}

