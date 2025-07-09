#include<iostream>
#include<string>
using namespace std;

class father{
    public:
    int height;
    int age;

    void print(){
        cout << "i am parent" << endl;
    }
};
class mother{
    public:
    int brain;
};

 class child:public father,public mother{    //both father and mother properties are go in the child . it is calles multiple inheritance.
    public:
    string skinColor;
 };

 int main(){
    child object;
    object.height=170;
    object.age=18;
    object.skinColor="jatin";
    cout<<object.skinColor << endl;
    object.brain=90;
    object.print();
    cout << object.brain <<endl;

    
 }