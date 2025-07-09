#include<iostream>
#include<string>
using namespace std;

class parent{
    public:
    int height;
    int age;

    void print(){
        cout << "i am parent" << endl;
    }
};
class parent2{
    public:
    int par;
};
 class child:public parent{
    public:
    string skinColor;
 };

 class abc:public parent,public parent2{     //it  is a combination of two or more type of inheritance.
    public:
    int a;
 };

 int main(){
    abc object;
    object.height=170;
    object.age=18;
    object.print();

    
 }