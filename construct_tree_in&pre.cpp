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
int f(int in[],int target,int start,int end){
for(int i=start;i<=end;i++){
    if(in[i]==target){
        return i;
    }
}
return -1;
}
Node* Tree(int in[],int pre[],int instart,int inend,int idx){
if(instart>inend) return NULL;
Node* root=new Node(pre[idx]);
int pos=f(in,pre[idx],instart,inend);
root->left=Tree(in,pre,instart,pos-1,idx+1);
root->right=Tree(in,pre,pos+1,inend,idx+(pos-instart)+1);
return root;
}
int main(){
int in[]={4,2,5,8,9,1,6,3,7,10};
int pre[]={1,2,4,5,8,9,3,6,7,10};
Tree(in,pre,0,9,0);

return 0;
}
