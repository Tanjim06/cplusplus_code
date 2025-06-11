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
    }
};
int search(Node* root,int target){
    if(root==NULL) return -1;
    if(root->data==target) return root->data;
    else if(root->data>target) return search(root->left,target);
    else return search(root->right,target);
}
int main(){
    Node* root=new Node(50);
    Node* a=new Node(20);
    Node* b=new Node(60);
    Node* c=new Node(17);
    Node* d=new Node(34);
    Node* e=new Node(55);
    Node* f=new Node(89);
    Node* g=new Node(10);
    Node* h=new Node(28);
    Node* i=new Node(70);
    Node* j=new Node(14);
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=d;
    b->left=e;
    b->right=f;
    c->left=g;
    d->left=h;
    f->left=i;
    g->right=j;
    cout<<search(root,34);
    return 0;
}