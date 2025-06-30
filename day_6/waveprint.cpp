#include <iostream>
using namespace std;

int main(){
    int matrix[3][4] =  {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int n=3;
    int m =4;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                cout << matrix[i][j]<<",";
            }else{
                cout << matrix[i][m-j-1]<<",";
            }
        }
        
    }
}