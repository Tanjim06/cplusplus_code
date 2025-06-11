//Queues using linkedlist
/*
#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

Node(int val){
this->data = val;
this->next = NULL;
}
};
class Queue{
Node* head;
Node* tail;
int size;
public:
    Queue(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }
void enqueue(int val){
Node* new_node = new Node(val);
if(head==NULL){
    this->head = new_node;
    this->tail = new_node;
}
else{
    this->tail->next = new_node;
    this->tail = new_node;
}
this->size++;
}
void dequeue(){
if(head==NULL){
    return;
}
else{
    Node* oldhead = this->head;
    Node* newhead = this->head->next;
    this->head = newhead;
    if(this->head==NULL) this->tail = NULL;
    oldhead->next = NULL;
    delete oldhead;
    this->size--;
}}
int getsize(){
return this->size;
}
bool isEmpty(){
return this->head==NULL;
}
int getFront(){
    if(this->head==NULL) return -1;
    return this->head->data;
}
};
int main(){
Queue q1;
q1.enqueue(1);
q1.enqueue(2);
q1.enqueue(3);
q1.enqueue(4);
q1.enqueue(5);
cout<<q1.getFront()<<endl;
while(!q1.isEmpty()){
    cout<<q1.getFront()<<" ";
    q1.dequeue();
}
return 0;
}
*/

//Queues using arrays
#include<iostream>
#include<vector>
using namespace std;
class Queue{
    int front;
    int back;
    vector<int> v;
public:
Queue(){
this->front = -1;
this->back = -1;
}
void enqueue(int data){
this->v.push_back(data);
this->back++;
if(this->back==0) this->front=0;
}
void dequeue(){
if(this->front==this->back){
    this->front = -1;
    this->back = -1;
    v.clear();
}
else this->front++;
}
int getFront(){
return this->v[this->front];
}
bool isEmpty(){
return this->front==-1;
}
};
int main(){
Queue q1;
q1.enqueue(10);
q1.enqueue(20);
q1.enqueue(30);
q1.enqueue(40);
q1.enqueue(50);
cout<<q1.getFront()<<endl;
while(!q1.isEmpty()){
    cout<<q1.getFront()<<" ";
    q1.dequeue();
}cout<<endl;
q1.dequeue();
q1.dequeue();
while(!q1.isEmpty()){
    cout<<q1.getFront()<<" ";
    q1.dequeue();
}
return 0;
}
