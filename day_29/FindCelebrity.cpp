// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int matrix[3][3]={0,1,0,0,0,0,0,1,0};
    int row;
    for(int i=0;i<3;i++){
        int temp = 0;
        for(int j=0;j<3;j++){
            if(matrix[i][j] == 0){
                temp++;
            }
        }
        if(temp == 3){
            row=i;
            break;
        }
        
        
    };
    bool found = false;
    int temp = 0;
    for(int i=0;i<3;i++){
            if(matrix[i][row] == 1){
                temp++;
            }
        };
    if(temp >= 2){
        found = true;
    }
        
    
    
    if(found == true){
    
    cout << "Celebraty is found"<<endl;
    }else{
        cout << "Celebraty is not found"<<endl;
    }
    

    return 0;
}