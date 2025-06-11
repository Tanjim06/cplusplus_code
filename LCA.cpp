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
int LCA(Node* root,int p,int q){
if(root==NULL) return -1;
if(root->data==p || root->data==q) return root->data;
int l = LCA(root->left,p,q);
int r = LCA(root->right,p,q);
if(l!=-1 && r!=-1) return root->data;
return (l!=-1)?l:r;
}
int main(){
Node* root=new Node(1);
Node* a=new Node(2);
Node* b=new Node(3);
Node* c=new Node(4);
Node* d=new Node(5);
Node* e=new Node(7);
Node* f=new Node(6);
Node* g=new Node(18);
Node* h=new Node(10);
root->left=a;
root->right=b;
a->left=c;
a->right=d;
d->left=f;
e->left=g;
e->right=h;
cout<<LCA(root,4,6);
return 0;
}
