#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
int data;
Node* ptr;
Node(int x){
    data=x;
    ptr=NULL;
}};
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    Node* h=new Node(8);
    Node* i=new Node(9);
    Node* j=new Node(10);
    a->ptr=b;


    return 0;
}