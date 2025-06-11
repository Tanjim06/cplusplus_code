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
left=NULL;
right=NULL;
}};
int main(){
int x,f,s;
cout<<"Enter the root value : "<<endl;
cin>>x;
queue<Node*>q;
Node* root = new Node(x);
q.push(root);
while(!q.empty()){
    Node *temp= q.front();
    q.pop();
    cin>>f;
    if(f!=-1){
        temp->left=new Node(f);
        q.push(temp->left);
    }
    cin>>s;
    if(s!=-1){
        temp->right=new Node(s);
        q.push(temp->right);
    }
}
return 0;
}
