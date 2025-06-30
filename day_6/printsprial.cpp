#include<iostream>
#include<vector>
using namespace std;

    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int minr=0,maxr=n-1,minc=0,maxc=n-1;
        int count =1;
    while(count <= n*n){
        // for first row (minr)
        for(int i=minc;i<=maxc;i++){
            matrix[minr][i] = count;
            count++;
        }
        minr++;
        if(count>n*n) break;
        // for last column (maxc)
        for(int i=minr;i<=maxr;i++){
            matrix[i][maxc]=count;
            count++;
        }
        maxc--;
        if(count>n*n) break;
        // for last row (maxr)
        for(int i=maxc;i>=minc;i--){
            matrix[maxr][i] = count;
            count++;
        }
        maxr--;
        if(count>n*n) break;
        // for first column (minc)
        for(int i=maxr;i>=minr;i--){
            matrix[i][minc] = count;
            count++;
        }
        minc++;
    }
    return matrix;
}
int main(){
    int n;
    cout << "Enter the number :";
    cin >> n;
    
    vector<vector<int>> matrix=generateMatrix(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j]<< " ";
            if(n>3) if(matrix[i][j]<=9) cout<<" ";
        }
        cout << endl;
    }


}
