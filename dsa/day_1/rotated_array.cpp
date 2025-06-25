#include <iostream>
using namespace std;

// Custom function to reverse a portion of array from index 'start' to 'end'
void reverse(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// Function to rotate the array to the right by d positions
void rightRotate(int arr[], int n, int d) {
    d = d % n;  // Handle if d > n

    // Step 1: Reverse last d elements
    reverse(arr, n - d, n - 1);

    // Step 2: Reverse first n-d elements
    reverse(arr, 0, n - d - 1);

    // Step 3: Reverse the whole array
    reverse(arr, 0, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    rightRotate(arr, n, d);

    cout << "Right Rotated array by 2: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
