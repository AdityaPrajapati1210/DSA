#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAlphaNum(char ch){
    if((ch >='0' && ch <='9') || tolower(ch) >= 'a' && tolower(ch)<='z') return true;

}
int main(){
    string str="a34&fgf4?3A";
    int n = str.length();
    int start=0;
    int end =n-1;

    while(start<=end){
        if(!isAlphaNum(str[start])){
            start++;continue;
        } 
        if(!isAlphaNum(str[end])){
            end--;continue;
        } 
        if(tolower(str[start]) != tolower(str[end])){
            cout << "This is not palindrome"<< endl;
            break;
        }else{
            end--;
            start++;
        }
    }
    if(start > end){
        cout << "This is palindrome string" << endl;
    }

        
   

}