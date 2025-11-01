#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

int height(Node*root){
    if(root == NULL){
        return 0;
    }
    int l= height(root->left);
    int r= height(root->right);

    return 1+max(l,r);
}

bool isbalanced(Node*root){
    if(root == NULL){
        return true;
    }
    int l = height(root->left);
    int r = height(root->right);

    if(abs(l-r)>1) return false;

    bool left = isbalanced(root->left);
    bool right = isbalanced(root->right);

    if(!left || !right) return false;
    return true;
}


int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
        //       1
        //      / \
        //    2     3
        //  /  \   /  \
        // 4   5  6    7
  
    // cout << height(root) << endl;
    cout<<isbalanced(root) << endl;
}