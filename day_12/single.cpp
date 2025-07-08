#include<iostream>
using namespace std;

class parent{
    public:
    int height;
    int age;

    void print(){
        cout << "i am parent" << endl;
    }
};
 class child:public parent{
    char skinColor;
 };

 int main(){
    child object;
    object.height=170;
    object.age=18;
    object.skinColor
 }