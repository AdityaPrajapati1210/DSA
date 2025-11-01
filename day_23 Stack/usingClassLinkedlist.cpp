#include <iostream>
using namespace std;

class Stack {
public:
    int data;
    Stack *next;
    // constructor
    Stack(int num) {
        this->data = num;
        next = NULL;
    }
};
class list {
    public:
    Stack *head;

    list(){
        head = NULL;
    }


    void push(int num){
        Stack *temp = new Stack(num);
        if(head == NULL){
            head = temp;
        }else{
            temp->next = head;
            head = temp;
        }
    }


     void display() {
        Stack *temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }


    void topElement(){
        cout << head->data << endl;
    }

    void deletetop(){
        Stack *temp = head;
        head = head->next;
        delete temp;
    }

};
    
int main() {
    list aditya;
    aditya.push(1);
    aditya.push(2);
    aditya.push(3);
    aditya.push(4);
    aditya.push(5);
    aditya.display();
    
    aditya.deletetop();
    aditya.deletetop();
    aditya.display();

    aditya.topElement();


   

}
