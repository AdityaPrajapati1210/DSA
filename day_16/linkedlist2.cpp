#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};
class list{
    Node* head = NULL;
    Node* tail = NULL;

    public:
    list(){
        head = tail = NULL;
    }


    void push_front(int val){
        Node*newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
        newnode->next = head;
        head = newnode;
        }
    }

    void push_back(int val){
        Node*newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void insert(int val ,int pos){
        if(pos == 0){
            push_front(val);
        }
        if(pos < 0) {
            cout << "Invalid";
             return;
        }
        Node*temp = head;
        
        for(int i=0;i<pos-1;i++){
            temp = temp->next;
        }
        
        Node *newnode = new Node(val);
        newnode->next = temp->next;
        temp->next = newnode;
    }


    void pop_front(){
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void pop_back(){
        Node*temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;

        }
        temp->next = NULL;
        delete temp;
        temp = NULL;

    }


    void print(){
        Node*temp  = head;
        while(temp!= NULL){
            cout << temp->data<< " ";
            temp = temp->next;
        }
    }




};
int main(){
    list ll;
    ll.push_front(10);    //add from front 
    ll.push_back(20);     // add from back
    ll.push_back(20);     
    ll.insert(30,1);     // add at any point
    ll.pop_front();     //remove from front 
    ll.pop_back();       //remove from back
    ll.print();          //print the linked list
}