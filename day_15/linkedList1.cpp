#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    // constructor
    Node(int val){
        data = val;
        next = NULL;
    }


};
class List{
    Node*head= NULL;
    Node*tail= NULL;


    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int num){
        Node*newnode = new Node(num);
        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head= newnode;
        }
    }

    void push_back(int num){
        Node*newnode = new Node(num);
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;

        }
    }

    void print(){
        Node*temp = head;
        while(temp!= NULL){
            cout << temp->data<<" ";
            temp = temp->next;
        }
    }

};

int main(){
    List abc;
    abc.push_front(10);
    abc.push_front(20);
    abc.push_front(30);

    abc.push_back(40);
// oh no!
    abc.print();

}
