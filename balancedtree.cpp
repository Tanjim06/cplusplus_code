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
}};
int height(Node* root){
if((root==NULL)||(root->left==NULL && root->right==NULL)) return 0;
return 1+max(height(root->left),height(root->right));
}
bool isBalanced(Node* root){
if(root==NULL) return true;
int lh=height(root->left);
if(root->left!=NULL) lh++;
int rh=height(root->right);
if(root->right!=NULL) rh++;
int d=abs(lh-rh);
if(d>1) return false;
return (isBalanced(root->left)&&isBalanced(root->right));
}
int main(){
Node* root=new Node(1);
Node* A=new Node(2);
Node* B=new Node(6);
Node* C=new Node(3);
Node* D=new Node(4);
Node* E=new Node(7);
Node* F=new Node(5);
root->left=A;
root->right=B;
A->left=C;
A->right=D;
B->right=E;
C->left=F;
cout<<isBalanced(root);
return 0;
}
