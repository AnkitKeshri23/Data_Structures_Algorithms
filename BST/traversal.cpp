#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    //constructor

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node* root, int data){

    //base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        //right part me insert karna hai
        root->right = insertIntoBST(root->right, data);
    }
    else{
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void takeInput(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraverasl(Node* &root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
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

void inOrder(Node* root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);

}
void preOrder(Node* root){

    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);

}
void postOrder(Node* root){

    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";

}

Node* minVal(Node* root){

    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
    //base case 
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
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        // if(root->left != NULL && root->right != NULL){
        //     int mini = minVal(root->right)->data;
        //     root->data = mini;
        //     root->right = deleteFromBST(root->right, mini);
        //     return root;
        // }

        if(root->left != NULL && root->right != NULL){
            int maxi = maxVal(root->left)->data;
            root->data = maxi;
            root->left = deleteFromBST(root->left, maxi);
            return root;
        }


    }

    else if(root->data > val){
        //left part
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        //right part
        root->right = deleteFromBST(root->right, val);
        return root;
    }

}

int main(){

    Node* root = NULL;

    cout << "Enter data to create BST " << endl;
    takeInput(root);

    cout << "Printing the BST " << endl;
    levelOrderTraverasl(root);
     
    cout << endl << "Inorder traversal is " << endl;
    inOrder(root);

    cout << endl << "PreInorder traversal is " << endl;
    preOrder(root);

    cout << endl << "Postorder traversal is " << endl;
    postOrder(root);

    cout << endl << "Minimum value is " << minVal(root) -> data << endl;
    cout << "Maximum value is " << maxVal(root) -> data << endl;

    //Deletion
    root = deleteFromBST(root, 20);

    cout << "Printing the BST " << endl;
    levelOrderTraverasl(root);
     
    cout << endl << "Inorder traversal is " << endl;
    inOrder(root);

    cout << endl << "PreInorder traversal is " << endl;
    preOrder(root);

    cout << endl << "Postorder traversal is " << endl;
    postOrder(root);

    cout << endl << "Minimum value is " << minVal(root) -> data << endl;
    cout << "Maximum value is " << maxVal(root) -> data << endl;
 
    return 0;
}