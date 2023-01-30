#include<bits/stdc++.h>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* Create_Tree(Node* root){
    int data;
    cout<<"Enter the data : ";
    cin>>data;
    root = new Node(data);
    
    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for left of "<<data<<" ";
    root->left=Create_Tree(root->left);

    cout<<"Enter data for right "<<data << " ";
    root->right=Create_Tree(root->right);

    return root;
}

void OrderLevelTraversal(Node* root){
    queue<Node*> q;
    
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp = q.front();
        
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
            }

            if(temp->right){
            q.push(temp->right);
            }
        }
    }
}

void Inorder_Traversal(Node* root){
    if(root==NULL){
        return;
    }

    Inorder_Traversal(root->left);
    cout<< root->data <<" ";
    Inorder_Traversal(root->right);
}

void Preorder_Traversal(Node* root){
    if(root==NULL){
        return;
    }
    
    cout<< root->data <<" ";
    Preorder_Traversal(root->left);
    Preorder_Traversal(root->right);
}

void Postorder_Traversal(Node* root){
    if(root==NULL){
        return;
    }
    
    Postorder_Traversal(root->left);
    Postorder_Traversal(root->right);
    cout<< root->data <<" ";
}

int main(){
    Node* root = NULL;

    //creation of tree
    root=Create_Tree(root);

    //level order traversal
    OrderLevelTraversal(root);

    //Inorder Traversal
    cout<<"Inorder Traversal : ";
    Inorder_Traversal(root);
    cout<<endl;

    cout<<"PreOrder Traversal : ";
    Preorder_Traversal(root);
    cout<<endl;

    cout<<"PostOrder Traversal : ";
    Postorder_Traversal(root);
    cout<<endl;
}