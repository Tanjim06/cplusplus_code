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
int diameter(Node* root){
if((root==NULL)||(root->left==NULL && root->right==NULL)) return 0;
int lans=diameter(root->left);
int rans=diameter(root->right);
int mid=height(root->left)+height(root->right);
if(root->left!=NULL) mid++;
if(root->right!=NULL) mid++;
int m=max(lans,max(rans,mid));
return m;
}
int main(){
Node* root=new Node(1);
Node* A=new Node(2);
Node* B=new Node(3);
Node* C=new Node(4);
Node* D=new Node(5);
Node* E=new Node(6);
Node* F=new Node(7);
Node* G=new Node(8);
root->left=A;
root->right=B;
A->left=C;
A->right=D;
B->left=E;
D->left=F;
D->right=G;
cout<<diameter(root);
return 0;
}
