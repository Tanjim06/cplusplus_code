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
void flatten(Node* root){
    Node* curr=root;
    while(curr!=NULL){
        if(curr->left!=NULL){
            Node* pred=curr->left;
            while(pred->right!=NULL){
                pred=pred->right;
            }
            pred->right=curr->right;
            curr->right=curr->left;
            curr->left=NULL;
        }
        curr=curr->right;
    }
    return;
}
int main(){
    Node* root=new Node(1);
    Node* a=new Node(2);
    Node* b=new Node(3);
    Node* c=new Node(4);
    Node* d=new Node(5);
    Node* e=new Node(6);
    Node* f=new Node(7);
    Node* g=new Node(8); 
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=d;
    b->left=e;
    e->left=g;
    b->right=f;
    flatten(root);
    Node* temp=root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    return 0;
}