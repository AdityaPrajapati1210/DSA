#include<iostream>
#include<algorithm>
using namespace std;

int maxRowSum( int arr[][3],int n,int m){

    int maxRowSums = -999;
    for(int i=0;i<n;i++){
        int rowSum = 0;
        for(int j=0;j<m;j++){
            rowSum += arr[i][j];
        }
        maxRowSums = max(maxRowSums , rowSum);
    }

    return maxRowSums;
}

int main(){
    int n=4,m=3;
    int arr[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    int result = maxRowSum(arr,n,m);
    cout << result;
    return 0;
}

