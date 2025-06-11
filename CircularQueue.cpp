#include<iostream>
#include<vector>
using namespace std;
class Queue{
    int front;
    int back;
    vector<int> v;
    int currsize;
    int tsize;
public:
Queue(int n){
v.resize(n);
this->front = 0;
this->back = n-1;
this->currsize = 0;
this->tsize = n;
}
void enqueue(int data){
if(isFull()) return;
this->back = (this->back+1)%tsize;
v[this->back] = data;
this->currsize++;
}
void dequeue(){
if(isEmpty()) return;
this->front = (this->front+1)%this->tsize;
this->currsize--;
}
int getFront(){
if(isEmpty()) return -1;
return this->v[this->front];
}
bool isEmpty() {
return currsize == 0;
}
bool isFull(){
return this->currsize==this->tsize;
}
};
int main(){
Queue q1(5);
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
return 0;
}

