#include<iostream>
#include<vector>
using namespace std;
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid;
        while(start<=end){
            mid= start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        if(nums[mid]>target ) return mid;
        else return mid+1;
    }
int main(){
    vector<int> nums = {1,2,4,5,6};
    int target = 3;
    int result = searchInsert(nums ,target);
    cout << result << endl;
}
