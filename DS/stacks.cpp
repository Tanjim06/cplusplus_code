//Stacks using array
/*
#include<iostream>
#include<climits>
using namespace std;
class Stack{
int capacity;
int* arr;
int topidx;
public:
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->topidx = -1;
    }
void push(int data){
if(this->topidx==this->capacity-1){
    cout<<"Overflow"<<endl;
    return;
}
this->topidx+=1;
this->arr[this->topidx] = data;
}
int pop(){
if(this->topidx==-1){
    cout<<"Underflow"<<endl;
    return INT_MIN;
}
this->topidx--;
return this->arr[this->topidx];
}
int top(){
if(this->topidx==-1){
    cout<<"Underflow"<<endl;
    return INT_MIN;
}
return this->arr[this->topidx];
}
bool isEmpty(){
if(this->topidx==-1){
    return true;
}}
int size(){
return this->topidx+1;
}
bool isFull(){
if(this->topidx==this->capacity-1){
    return true;
}}

};
int main(){
Stack st(5);
st.push(1);
st.push(2);
st.push(3);
cout<<st.top()<<endl;
st.push(4);
st.push(5);
cout<<st.top()<<endl;
st.push(8);
st.pop();
st.pop();
st.pop();
st.push(8);
cout<<st.top()<<endl;

return 0;
}
*/

//Stacks using linkedlist
#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int data){
    this->data = data;
    next = NULL;
}
};
class Stack{
Node* head;
int currsize;
int capacity;
public:
Stack(int c){
    this->capacity = c;
    head = NULL;
    currsize = 0;
}
bool isEmpty(){
if(this->head==NULL){
    return false;
}}
bool isFull(){
if(this->currsize==this->capacity){
    return true;
}}
void push(int data){
    if(this->currsize==this->capacity){
        cout<<"Overflow"<<endl;
        return;
    }
    Node* new_node = new Node(data);
    new_node->next = this->head;
    this->head = new_node;
    currsize++;
}
int pop(){
if(head==NULL){
    cout<<"Underflow"<<endl;
    return INT_MIN;
}
Node* new_head = this->head->next;
this->head->next = NULL;
Node* toBeremoved = this->head;
int result = toBeremoved->data;
delete toBeremoved;
this->head = new_head;
return result;
}
int size(){
return this->currsize;
}
int getTop(){
if(this->head==NULL){
    cout<<"Underflow"<<endl;
    return INT_MIN;
}
return this->head->data;
}
};
int main(){
Stack st(5);
st.push(1);
st.push(2);
st.push(3);
cout<<st.getTop()<<endl;
st.push(4);
st.push(5);
cout<<st.getTop()<<endl;
//st.pop();
//st.pop();
//cout<<st.getTop()<<endl;
st.push(8);
return 0;
}
