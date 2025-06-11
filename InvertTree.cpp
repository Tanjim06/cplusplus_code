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
Node* invert(Node* root){
if(root==NULL) return root;
Node* l=root->left;
Node* r=root->right;
root->left=invert(r);
root->right=invert(l);
return root;
}
int main(){
Node* root=new Node(1);
Node* a=new Node(2);
Node* b=new Node(3);
Node* c=new Node(4);
Node* d=new Node(5);
Node* e=new Node(6);
root->left=a;
root->right=b;
a->left=c;
a->right=d;
b->right=e;
invert(root);
cout<<b->data;
return 0;
}
