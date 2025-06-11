#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
int value;
Node* left;
Node* right;
Node(int x){
value=x;
left=right=NULL;
}};
int s(Node* root){
if(root==NULL) return 0;
return 1+s(root->left)+s(root->right);
}
int sum(Node* root){
if(root==NULL) return 0;
return root->value+sum(root->left)+sum(root->right);
}
int height(Node* root){
if(root==NULL || (root->left==NULL && root->right==NULL)) return 0;
int leftheight=height(root->left);
int rightheight=height(root->right);
return 1+max(leftheight,rightheight);
}
int m(Node* root){
if(root==NULL) return INT_MIN;
return max(root->value,max(m(root->left),m(root->right)));
}
int main(){
Node* root=new Node(1);
Node* b=new Node(2);
Node* c=new Node(30);
Node* d=new Node(4);
Node* e=new Node(5);
Node* f=new Node(6);
root->left=b;
root->right=c;
b->left=d;
b->right=e;
c->left=f;
cout<<s(root)<<endl;
cout<<sum(root)<<endl;
cout<<height(root)<<endl;
cout<<m(root)<<endl;
return 0;
}
