#include<iostream>
#include<vector>
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
Node* insert(Node* root,int x){
if(root==NULL){
root=new Node(x);
return root;
}
if(root->data>x){
    root->left=insert(root->left,x);
}
if(root->data<x){
    root->right=insert(root->right,x);
}
return root;
}
void Inorder(Node* root,vector<int>&ans){
if(!root) return;
Inorder(root->left,ans);
ans.push_back(root->data);
Inorder(root->right,ans);
}
void Postorder(Node* root,vector<int>&ans,int &i){
if(!root) return;
Postorder(root->left,ans,i);
Postorder(root->right,ans,i);
root->data=ans[i];
i++;
}
void BST2maxheap(Node* root){
vector<int>ans;
Inorder(root,ans);
int index=0;
Postorder(root,ans,index);
}
void printpostorder(Node* root){
if(!root) return;
printpostorder(root->left);
printpostorder(root->right);
cout<<root->data<<" ";
}
int main(){
Node* root=NULL;
root=insert(root,1);
root=insert(root,2);
root=insert(root,3);
root=insert(root,4);
root=insert(root,5);
root=insert(root,6);
root=insert(root,7);
BST2maxheap(root);
printpostorder(root);
return 0;
}
