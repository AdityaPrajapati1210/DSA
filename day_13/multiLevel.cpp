#include<iostream>
#include<string>
using namespace std;

class baba{
    public:
    int height;
    int age;

    void print(){
        cout << "i am parent" << endl;
    }
};
 class papa:public baba{
    public:
    string skinColor;
 };


 class mai:public papa{
    public:
    int weight;
 };


 class son:public mai{
    public:
    int speed;
 };



 int main(){
    papa object;
    object.height=170;
    object.age=18;
    object.skinColor="jatin";
    cout<<object.skinColor << endl;
    object.print();

    son obj2;
    obj2.print();
       //this mean all of your properties of your parent is comes to son,by inheritance multilevel.

    
 }