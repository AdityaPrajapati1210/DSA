#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int n=3;
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int c1r,c1c,c2r,c2c;
    cout<<"Enter first coordinates : ";
    cin>>c1r;
    cin>>c1c;
    cout<<"Enter second coordinates : ";
    cin>>c2r;
    cin>>c2c;
    if(c1r>2 || c1r<0||c1c<0||c1c>2||c2r>2 || c2r<0||c2c<0||c2c>2){
        cout << "Enter a valid coordinates "<<endl;
        return 0;
    }else{
         for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                 if(i>=c1r && i<=c2r && j>=c1c && j<=c2c){
                        sum += arr[i][j];
                }
            }
        }
           cout << sum<<endl;
    }   

}