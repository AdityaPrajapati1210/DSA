#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmaller(int a[], int n) {
    stack<int> s;
    vector<int> res(n, n); // default right boundary = n
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && a[s.top()] >= a[i]){
            s.pop();
        }
        if(!s.empty()) res[i] = s.top();
        s.push(i);
    }
    return res;
}

vector<int> prevSmaller(int a[], int n) {
    stack<int> s;
    vector<int> res(n, -1); // default left boundary = -1
    for(int i=0;i<n;i++){
        while(!s.empty() && a[s.top()] >= a[i]){
            s.pop();
        }
        if(!s.empty()) res[i] = s.top();
        s.push(i);
    }
    return res;
}

int largestRectangle(int a[], int n) {
    vector<int> next = nextSmaller(a, n);
    vector<int> prev = prevSmaller(a, n);
    int maxArea = 0;

    for(int i=0;i<n;i++){


        int width = next[i] - prev[i] - 1;      //main formula of the function


        int area = a[i] * width;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main() {
    int nums[] = {2,3,5,6,2,4,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    
    cout << "Largest Rectangle Area = " << largestRectangle(nums, n) << endl;


    vector<int> temp = nextSmaller(nums , n);
   for(int i=0;i<n;i++){
    cout<<temp[i]<< " ";
   }
   cout << endl; 
    vector<int> abc = prevSmaller(nums , n);
   for(int i=0;i<n;i++){
    cout<<abc[i]<< " ";
   }
    return 0;
}
