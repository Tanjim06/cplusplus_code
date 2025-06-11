#include<iostream>
#include<list>
#include<cstring>
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
void helper(Node* root,list<string> arr[],string s){
if(root==NULL) return;
if(root->left==NULL && root->right==NULL){
    s+=root->data;
    arr.append(s);
    return;
}
helper(root->left,arr,s+root->data+"->");
helper(root->right,arr,s+root->data+"->");
}
list<string> btpath(Node* root,int n){
list<string> arr[n];
helper(root,arr," ");
return arr;
}
int main(){
Node* root=new Node(1);
Node* a=new Node(2);
Node* b=new Node(3);
Node* c=new Node(4);
Node* d=new Node(5);
Node* e=new Node(7);
Node* f=new Node(6);
root->left=a;
root->right=b;
a->left=c;
a->right=d;
b->right=e;
d->left=f;
int n;
cin>>n;
int arr[n];
arr=btpath(root,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
