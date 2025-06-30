// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int matrix[3][3]={
        {1,2,4},
        {4,5,6},
        {7,8,9}
    };
    int n =3, m=3;
    int count = 0;
    int minr=0,maxr=n-1,minc=0,maxc=m-1;
    while(count < m*n){
        // for first row (minr)
        for(int i=minc;i<=maxc;i++){
            cout << matrix[minr][i];
            count++;
        }
        minr++;
        if(count>=m*n) break;
        // for last column (maxc)
        for(int i=minr;i<=maxr;i++){
            cout << matrix[i][maxc];
            count++;
        }
        maxc--;
        if(count>=m*n) break;
        // for last row (maxr)
        for(int i=maxc;i>=minc;i--){
            cout << matrix[maxr][i];
            count++;
        }
        maxr--;
        if(count>=m*n) break;
        // for first column (minc)
        for(int i=maxr;i>=minr;i--){
            cout << matrix[i][minc];
            count++;
        }
        minc++;
        
        


    }
}