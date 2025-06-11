#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* left;
Node* right;
Node(int x){
data=x;
left=right=NULL;
}
};
Node* binaryTree(){
int x;
cin>>x;
if(x==-1) return NULL;
Node* temp=new Node(x);
cout<<"Enter the left child of "<<x<<endl;
temp->left=binaryTree();
cout<<"Enter the right child of "<<x<<endl;
temp->right=binaryTree();
return temp;
}
void preOrder(Node* root){
if(root==NULL) return;
cout<<root->data<<" ";
preOrder(root->left);
preOrder(root->right);
}
void inOrder(Node* root){
if(root==NULL) return;
inOrder(root->left);
cout<<root->data<<" ";
inOrder(root->right);
}
void postOrder(Node* root){
if(root==NULL) return;
postOrder(root->left);
postOrder(root->right);
cout<<root->data<<" ";
}
int main(){
cout<<"Enter the root node : "<<endl;
Node* root;
root=binaryTree();
preOrder(root);
return 0;
}
