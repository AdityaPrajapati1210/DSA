// aditya ddqn
#include<iostream>
using namespace std;


// inheritance ---->  parent properties in child.

// father height is simmiler to his child.
class Father{
    public:
    int height;
    char skinColor;

    int getheight(){
        return height;
    }
};

class Child:public Father{           // its should be inheritance public,protected,private.that is the mode of inheritance. 
    public:
    int age;
};


// if parent properties is    public    and child inheritance by     public ---->public
// if parent properties is    public    and child inheritance by     protected ---->protected
// if parent properties is    public    and child inheritance by     private ---->private

// if parent properties is     protected     and child inheritance by     public ---->protected
// if parent properties is     protected     and child inheritance by     protected ---->protected
// if parent properties is     protected     and child inheritance by     private ---->private

// if parent properties is     private     and child inheritance by     public ---->No Access
// if parent properties is     private     and child inheritance by     protected ---->No Access
// if parent properties is     private     and child inheritance by     private ---->No Access




// protected and private are similar only-->
// protected are access only in inside child class but private only access in parent class .and no one is access in main
int main(){
    
    // create a child object
    Child aditya;
    aditya.height = 34;

    cout << aditya.getheight() << endl;   //in this call no any height variable in this child class but it is defined in father and this properties is interitance by its child class.


}
