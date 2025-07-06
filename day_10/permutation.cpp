#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
void solve(vector<int>nums,vector<vector<int>>&ans,int index){
    // base case
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
    
    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);
        // back track
        swap(nums[index],nums[j]);
        
    }
    
}

int main() {
    vector<int>nums = {1,2,3};
    
    vector<vector<int>> ans;
    int index =0;
    
    solve(nums,ans,index);
    int n=nums.size();
    for(int i=1;i<nums.size();i++){
        n*=n-1;
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<nums.size();j++){
            cout<<ans[i][j] << " ";
        }
        cout << endl;
    }
}
