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
bool checkSame(Node* a,Node* p){
if(a==NULL && p==NULL) return true;
if(a==NULL || p==NULL) return false;
if(a->data!=p->data) return false;
return checkSame(a->left,p->left)&&checkSame(a->right,p->right);
}
int main(){
Node* a=new Node(1);
Node* b=new Node(2);
Node* c=new Node(3);
a->left=b;
a->right=c;
Node* p=new Node(1);
Node* q=new Node(2);
Node* r=new Node(3);
p->left=q;
p->right=r;
cout<<checkSame(a,p);
return 0;
}
