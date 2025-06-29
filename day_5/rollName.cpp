#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Create n rows with 2 columns each
    int vec[2][n];
    for(int i = 0; i < n; i++) {
        cout << "Enter roll number and marks"<<endl;
        for(int j = 0; j < 2; j++) {
            cin >> vec[i][j];
        }
    }

    cout << "\nStored Student Data:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            cout << vec[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
