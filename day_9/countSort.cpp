#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int arr[]={5,1,4,2,3};
    int n=sizeof(arr)/sizeof(int);
    int mx = -999;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>mx){
    //         mx = max(arr[i],mx);
    //     }
    // }
    int mx = *max_element(arr,arr+n);
    // int count[mx+1];
    // for(int i=0;i<mx+1;i++){
    //     count[i]=0;
    // }
    vector<int>count(mx+1,0);
    for(int i=0;i<n;i++){
        count[arr[i]]++;

    }
    int j=0;
    for(int i=0;i<mx+1;i++){
        while(count[i]>0){
            arr[j] = i;
            j++;
            count[i]--;
        }
    }
    for(int val : arr){
        cout << val << " ";
    }
    

}