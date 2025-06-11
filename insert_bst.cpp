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
void insert(Node* root,int value){
    Node* newnode=new Node(value);
    if(root==NULL){
        root=newnode;
    }
    if(root->data>value){
        if(root->left==NULL){
            root->left=newnode;
        }
        else{
            insert(root->left,value);
        }
    }
    else{
        if(root->right==NULL){
            root->right=newnode;
        }
        else{
            insert(root->right,value);
        }
    }
}
void display(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    display(root->left);
    display(root->right); 
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
    display(root);
    cout<<endl;
    insert(root,40);
    display(root);

    return 0;
}