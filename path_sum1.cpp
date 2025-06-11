#include<iostream>
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
bool haspathsum(Node* root,int targetsum){
    if(root==NULL) return false;
    if(root!=NULL && root->left==NULL && root->right==NULL){
        if(root->data==targetsum) return true;
    }
    return haspathsum(root->left,targetsum-root->data)||haspathsum(root->right,targetsum-root->data);
}
int main(){
   Node *root=new Node(5);
   Node *a=new Node(4);
   Node *b=new Node(8);
   Node *c=new Node(11);
   Node *d=new Node(13);
   Node *e=new Node(4);
   Node *f=new Node(7);
   Node *g=new Node(2);
   Node *h=new Node(1);
   root->left=a;
   root->right=b;
   a->left=c;
   c->left=f;
   c->right=g;
   b->left=d;
   b->right=e;
   e->right=h;
   printf("%d",haspathsum(root,22));
   return 0;
}