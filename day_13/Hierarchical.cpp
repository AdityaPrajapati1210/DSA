#include<iostream>
#include<string>
using namespace std;

class A{
    public:

    void print(){
        cout << "i am A" << endl;
    }
};

 class B:public A{
    public:
    void print(){
        cout << "i am B" << endl;
    }
 };

 class C:public A{
    public:
    void print(){
        cout << "i am C" << endl;
    }
 };

 class D:public B{
    public:
    void print(){
        cout << "i am D" << endl;
    }
 };

 class E:public B{
    public:
    void print(){
        cout << "i am E" << endl;
    }
 };


 class F:public C{
    public:
    void print(){
        cout << "i am F" << endl;
    }
 };


 class G:public C{
    public:
    void print(){
        cout << "i am G" << endl;
    }
 };

//  it look like a tree --->
//            A
//          /  \
//        B     C
//      /  \   / \
//     D   E  F   G

// this type of inheritance is called hierarchical.
 int main(){
    F object;
    object.A::print();

 }