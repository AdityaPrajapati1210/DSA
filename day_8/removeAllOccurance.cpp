#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string str = "abcabcaadhfabcdj";
    string part = "abc";

    while (str.find(part) < str.length()) {
        int m = str.find(part);
        str.erase(m, part.length());
    }

    cout << str;
    return 0;
}
