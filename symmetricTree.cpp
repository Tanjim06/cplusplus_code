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
bool checkSame(Node* a,Node* p){
if(a==NULL && p==NULL) return true;
if(a==NULL || p==NULL) return false;
if(a->data!=p->data) return false;
return checkSame(a->left,p->left)&&checkSame(a->right,p->right);
}
Node* invert(Node* root){
if(root==NULL) return root;
Node* l=root->left;
Node* r=root->right;
root->left=invert(r);
root->right=invert(l);
return root;
}
bool isSymmetric(Node* root){
if(root==NULL) return 1;
root->left=invert(root->left);
return checkSame(root->left,root->right);
}
int main(){
Node* root=new Node(1);
Node* a=new Node(2);
Node* b=new Node(2);
Node* c=new Node(3);
Node* d=new Node(4);
Node* e=new Node(4);
Node* f=new Node(3);
Node* g=new Node(5);
Node* h=new Node(5);
root->left=a;
root->right=b;
a->left=c;
a->right=d;
c->right=g;
b->left=e;
b->right=f;
f->left=h;
cout<<isSymmetric(root);
return 0;
}
