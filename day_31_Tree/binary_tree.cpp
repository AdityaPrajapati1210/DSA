// Online C++ compiler to run C++ program online
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

void preorder(Node*root){
    // base case
    if(root == NULL){
        return;
    }
    
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
    
}


void postorder(Node*root){
    // base case
    if(root == NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
    
}


void inorder(Node*root){
    // base case
    if(root == NULL){
        return;
    }
    
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
    
}


// level order of traversal.
vector<vector<int>> treeorder(Node*root){
    vector<vector<int>> ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            Node * temp = q.front();
            q.pop();
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
            level.push_back(temp->data);
        }
            for(int j=0;j<level.size();j++){

                cout << level[j] << " ";
            }
            cout << endl;
        ans.push_back(level);
    }
    return ans;
}



// preoder using stack
void itreative_preorder(Node*root){
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        cout << root->data << " ";
        if(root->right != NULL) st.push(root->right);
        if(root->left != NULL) st.push(root->left);
    }
}



// iterative inorder traversal

void iterative_inorder(Node*root ){
    stack<Node*> st;
    Node*temp = root;
    while(true){
        if(temp != NULL){
            st.push(temp);
            temp = temp->left;
        }else{
            if(st.empty() == true) break;
            temp = st.top();
            st.pop();
            cout << temp->data << " ";
            temp = temp->right;
        }
    }
}



// iterative postorder


void iterative_postorder(Node*root){
    stack<Node*> st1 , st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left != nullptr) st1.push(root->left);
        if(root->right != nullptr) st1.push(root->right);

    }

    while(!st2.empty()){
        cout << st2.top()->data << " ";
        st2.pop();
    }

}


// iterative postorder using single stack
void postorder_single(Node*root){
    stack<Node*>st;
    Node* curr = root;
    while(curr != NULL || !st.empty()){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }else{
            Node* temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                st.pop();
                cout << temp->data << " ";
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    cout << temp->data << " ";
                }
            }else{
                curr = temp;
            }
        }
    }

}


vector<int>super(Node*root){
    stack<pair<Node*,int>>st;
    vector<int> pre, in, post;
}



int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    // cout << "Pre-order traverse in binary tree" << endl;  //(root , left , rifht)
    // preorder(root);
    // cout<< "Postorder"<<endl;
    postorder(root);
    // cout<< "inorder"<<endl;
    // inorder(root);

    // // post(left,right,root)
    // // inorder(left,root,right)


    // vector<vector<int>> level;
    // treeorder(root);

    // itreative_preorder(root);
    // iterative_inorder(root);

    // iterative_postorder(root);

    postorder_single(root);
    


   
    return 0;
}