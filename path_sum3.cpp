#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        this->data=x;
        left=right=NULL;
    }
};
int helper(Node* root,int targetsum){
    if(root==NULL) return 0;
    int count=0;
    if(root->data==targetsum) count++;
    return count+(helper(root->left,targetsum-root->data)+helper(root->right,targetsum-root->data));
}
int pathsum(Node* root,int targetsum){
    if(root==NULL) return 0;
    int pathcount=helper(root,targetsum);  //helper function will calculate the path of each nodes
    pathcount+=(pathsum(root->left,targetsum)+pathsum(root->right,targetsum));
    return pathcount;
}
int main(){
   Node *root=new Node(10);
   Node *a=new Node(5);
   Node *b=new Node(-3);
   Node *c=new Node(3);
   Node *d=new Node(2);
   Node *e=new Node(11);
   Node *f=new Node(3);
   Node *g=new Node(-2);
   Node *h=new Node(1);
   root->left=a;
   root->right=b;
   a->left=c;
   a->right=d;
   c->left=f;
   c->right=g;
   b->right=e;
   d->right=h;
   cout<<pathsum(root,8);
   return 0;
}