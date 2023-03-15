#include<iostream>
#include<queue>
using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

node* buildTree(node* root){

    cout << "Enter the data " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the data for inserting in left of " << data << endl;
    root -> left = buildTree(root->left);

    cout << "Enter the data for inserting in right of " << data << endl;
    root -> right = buildTree(root->right);

    return root;

}

void levelOrderTraversel(node* root){

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << temp->data << " ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

}

void inorder(node* root){//LNR

    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

void preorder(node* root){//NLR
    if(root==NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root){//LRN
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

}


int main(){
    
    node* root = NULL;

    root = buildTree(root);

    // cout << "Level Order Traversal output is " << endl;

    // levelOrderTraversel(root);

    // cout << "\nInorder Traversal output is " << endl;

    // inorder(root);

    // cout <<"\nPreorder traversal output is " << endl;

    // preorder(root);


    buildTree(root);

    cout << "\nPostorder traversal is " << endl;

    postorder(root);

    return 0;
}