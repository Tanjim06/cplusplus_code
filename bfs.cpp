#include<iostream>
#include<queue>
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
void bfs(Node* root){
queue<Node*> q;
if(root!=NULL) q.push(root);
while(!q.empty()){
    Node* temp=q.front();
    if(temp->left!=NULL){
        q.push(temp->left);
    }
    if(temp->right!=NULL){
        q.push(temp->right);
    }
    cout<<temp->data<<" ";
    q.pop();
}
}
int main(){
Node* A=new Node(1);
Node* B=new Node(2);
Node* C=new Node(3);
Node* D=new Node(4);
Node* E=new Node(5);
Node* F=new Node(6);
Node* G=new Node(7);
A->left=B;
A->right=C;
B->left=D;
B->right=E;
C->left=F;
C->right=G;
bfs(A);
return 0;
}
