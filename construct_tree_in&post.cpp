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
Node* Tree(int in[],int post[],int instart,int inend,int idx){
if(instart>inend) return NULL;
Node* root=new Node(post[idx]);
int pos=f(in,post[idx],instart,inend);
root->right=Tree(in,post,pos+1,inend,idx-1);
root->left=Tree(in,post,instart,pos-1,idx-(inend-pos)-1);
return root;
}
int main(){
int in[]={4,2,6,5,7,1,10,8,9,3};
int post[]={4,6,7,5,2,10,9,8,3,1};
Tree(in,post,0,9,9);

return 0;
}

