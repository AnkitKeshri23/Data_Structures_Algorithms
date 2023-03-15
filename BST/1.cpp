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

node* insertIntoBST(node* root, int data){
    //base case
    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(root->data > data){
        root->left = insertIntoBST(root->left, data);
    }

    else{
        root->right = insertIntoBST(root->right, data);
    }
    return root;

}


void takeInput(node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}


void levelOrderTraversal(node* &root){

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

node* minVal(node* root){
    node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

node* maxVal(node* root){
    node* temp = root;

    while(temp->right!= NULL){
        temp = temp->right;
    }
    return temp;
}

node* deleteFromBST(node* root, int val){

    if(root == NULL){
        return root;
    }

    if(root->data == val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child
        //left child
        if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root ;
            return temp;
        }

        //right child
        if(root->right != NULL && root->left == NULL){
            node* temp = root->right;
            delete root ;
            return temp;
        }

        //2 child
        if(root->right != NULL && root->right != NULL){
            int max = maxVal(root->left)->data;
            root->data = max;
            root->left = deleteFromBST(root->left, max);
            return root;
        }


    }

    else if(root->data > val){
        root->left = deleteFromBST(root->left, val);
    }

    else{
        root->right = deleteFromBST(root->right, val);
    }

}


void inOrder(node* & root){
    //base case
    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node* & root){
    //base case
    if(root == NULL){
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* & root){
    //base case
    if(root == NULL){
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}


int main(){
    
    //12 10 18 13 8 7 16 21 1 -1
    node* root = NULL;

    cout << "Enter data to create BST " << endl;
    takeInput(root);

    cout << "Printing the BST " << endl;
    levelOrderTraversal(root);


    cout << "Inorder traversal is " << endl;
    inOrder(root);

    cout << endl << "PreOrder Traversal is " << endl;
    preOrder(root);

    cout << endl << "PostOrder Traversal is " << endl;
    postOrder(root);

    cout << endl << "Maximum Value is " << maxVal(root) -> data << endl;
    cout << "Minimum Value is " << minVal(root) -> data << endl;

    // root = deleteFromBST(root, 8);

    // cout << "Printing the BST " << endl;
    // levelOrderTraversal(root);



    return 0;
}