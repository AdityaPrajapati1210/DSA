#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    int partition(vector<int>&arr ,int st,int end){
        int ind=st-1; int pivot = arr[end];
        for(int i=st;i<end;i++){

            if(arr[i]>=pivot){
                ind++;
                swap(arr[i],arr[ind]);
            }

        }
        ind++;
        swap(arr[ind],arr[end]);
        return ind;
    }
    void quickSort(vector<int> &arr ,int st,int end){
        if(st<end){
            int index = partition(arr ,st,end);
            quickSort(arr , st , index-1);
            quickSort(arr , index+1 , end);

        }
        
    }

int main(){
    vector<int>arr={5,1,4,2,3};
    int n=arr.size();
    int st=0,end=n-1;
    quickSort(arr ,st ,end);
    for(int val: arr){
        cout << val <<" ";
    }

}