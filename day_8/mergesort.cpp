#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Step 1: Remove all placeholder 0s beyond the m valid elements
        nums1.resize(m); // keep only first m elements

        // Step 2: Append nums2
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        // Step 3: Sort the combined array
        sort(nums1.begin(), nums1.end());

        // Step 4: Optional print (not needed on LeetCode, but for testing)
        for (int i = 0; i < m + n; i++) {
            cout << nums1[i] << " ";
        }
    }
int main(){
    vector<int> nums1 = {1,4,4,2,0,0,0};
    vector<int> nums2= {1,5,3,2};
    int m=4 ,n=4;
    merge(nums1 ,m,nums2,n); 
}

