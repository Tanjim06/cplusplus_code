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
Node* buildTree(Node* root){
int data;
cin>>data;
root=new Node(data);
if(data==-1) return NULL;
cout<<"Enter the left child of "<<data<<endl;
buildTree(root->left);
cout<<"Enter the right child of "<<data<<endl;
buildTree(root->right);
return root;
}
int main(){
Node* root=NULL;
root=buildTree(root);

return 0;
}
