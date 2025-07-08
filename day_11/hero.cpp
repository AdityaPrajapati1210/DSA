#include<iostream>
using  namespace std;
class Hero {
    public:
    int health;
    char level;


    void sethealth(int health){
        this-> health = health;
    }

    void setlevel(int level){
        this-> level = level;
    }

    void print(){
        cout << health <<endl;
        cout << level <<endl;

    }
};