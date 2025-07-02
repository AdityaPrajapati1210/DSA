#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str="i am coder";
    int n = str.length();
    string ans= "";

    reverse(str.begin(),str.end());
    
    for(int i=0;i<n;i++){
        string word= "";
        while(i<n && str[i]!=' '){
            word+=str[i];
            i++;
        }
        reverse(word.begin(),word.end());

        if (!word.empty()) {
            if (!ans.empty()) ans += ' ';
            ans += word;
        }

    }
    cout << ans;
}