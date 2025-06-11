#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *left;
Node *right;
Node(int x){
data=x;
left=right=NULL;
}};
Node* insert(){
int x;
cin>>x;
if(x==-1) return NULL;
Node* root=new Node(x);
cout<<"Enter left child of  "<<x<<"\n";
root->left=insert();
cout<<"Enter right child of  "<<x<<"\n";
root->right=insert();
return root;
}
int Count(Node* root){
if(root==NULL) return 0;
return 1+Count(root->left)+Count(root->right);
}
bool CBT(Node* root,int i,int node){
if(root==NULL) return 1;
if(i>=node) return 0;
return CBT(root->right,2*i+1,node)&&CBT(root->right,2*i+2,node);
}
bool MaxHeap(Node* root){
if(root->left){
if(root->data<root->left->data) return 0;
if(!MaxHeap(root->left)) return 0;
}
if(root->right){
if(root->data<root->right->data) return 0;
return MaxHeap(root->right);
}
return 1;
}
bool isheap(Node* root){
int n=Count(root);
bool ans=CBT(root,0,n);
if(ans==0) return 0;
return MaxHeap(root);
}
int main(){
Node* root=insert();
if(isheap(root))cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
