#include<iostream>
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
void display(Node* root){
if(root==NULL) return;
cout<<root->value<<" ";
display(root->left);
display(root->right);
}
int main(){

Node* root=new Node(1);
Node* b=new Node(2);
Node* c=new Node(3);
Node* d=new Node(4);
Node* e=new Node(5);
Node* f=new Node(6);
root->left=b;
root->right=c;
b->left=d;
b->right=e;
c->left=f;
display(root);


return 0;
}
