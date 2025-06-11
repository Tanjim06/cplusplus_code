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
Node* helper(int pre[],int prelo,int prehi,int in[],int inlo,int inhi){
Node* root=new Node(pre[prelo]);
int i=inlo;
while(in[i]!=pre[prelo]) i++;
int leftsize=i-inlo;
root->left=helper(pre,prelo+1,prelo+leftsize,in,inlo,i-1);
root->right=helper(pre,prelo+leftsize+1,prehi,in,i+1,inhi);
return root;
}
Node* build(Node* root){
int n=7;
return helper(pre,0,n-1,in,0,n-1);
}
int main(){
int n=7;
int pre[]={1,2,4,5,3,6,7};
int in[]={4,2,5,1,6,3,7};
build()
return 0;
}
