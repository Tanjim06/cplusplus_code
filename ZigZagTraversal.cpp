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
void nthlevel(Node* root,int n){
if(root==NULL) return;
if(n==1){
    cout<<root->data<<" ";
    return;
}
nthlevel(root->left,n-1);
nthlevel(root->right,n-1);
}
void nthlevel2(Node* root,int n){
if(root==NULL) return;
if(n==1){
    cout<<root->data<<" ";
    return;
}
nthlevel2(root->right,n-1);
nthlevel2(root->left,n-1);
}
int main(){
Node* root = new Node(1);
Node* a = new Node(2);
Node* b = new Node(3);
Node* c = new Node(4);
Node* d = new Node(5);
Node* e = new Node(6);
Node* f = new Node(7);
Node* g = new Node(8);
Node* h = new Node(9);
Node* i = new Node(10);
root->left=a;
root->right=b;
a->left=c;
a->right=d;
b->left=e;
b->right=f;
c->right=g;
e->left=h;
f->left=i;
for(int i=0;i<5;i++){
    if(i%2!=0) nthlevel(root,i);
    else nthlevel2(root,i);
}
return 0;
}
