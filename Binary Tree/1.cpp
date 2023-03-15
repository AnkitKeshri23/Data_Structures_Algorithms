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
    root->left = buildTree(root->left);

    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;

}

void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
        cout << temp->data << " ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }

    }
}

void inOrder(node* root){

    if(root==NULL){
        return;
    }

    inOrder(root->left);
    cout << root -> data << " ";
    inOrder(root->right);
}

void preOrder(node* root){

    if(root==NULL){
        return;
    }

    cout << root -> data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){

    if(root==NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root -> data << " ";
}


int main(){
    
    node* root = NULL;

    root = buildTree(root);
    cout << endl;
    levelOrderTraversal(root);

    cout << endl << "Inorder traversal is " << endl;
    inOrder(root);

    cout << endl << "Preorder traversal is " << endl;
    preOrder(root);

    cout << endl << "Postorder traversal is " << endl;
    postOrder(root);



    return 0;
}