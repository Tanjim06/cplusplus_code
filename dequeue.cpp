/*
#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> dq;
dq.push_back(10);
dq.push_back(20);
dq.push_back(30);
dq.push_front(1);
dq.push_front(12);
dq.push_front(4);
dq.push_front(7);
while(!dq.empty()){
    cout<<dq.front()<<" ";
    dq.pop_front();
}cout<<endl;
return 0;
}
*/

/*Q.1 You are given an array of integers nums, there is a sliding
window of size k which is moving from very left of the array to the very
right.You can only see the k numbers in the window.Each time the sliding
window moves right by one position.Return the max sliding window which
basically contains the max element in each window
*/
/*
#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector<int> max_window_ele(vector<int> &arr,int k){
vector<int> res;
deque<int> dq;
for(int i=0;i<k;i++){
    while(!dq.empty() && arr[dq.back()] < arr[i]){
        dq.pop_back();
    }
    dq.push_back(i);
}
res.push_back(dq.front());
for(int i=k;i<arr.size();i++){
    int curr = arr[i];
    if(dq.front() == (i-k)) dq.pop_front();
    while(!dq.empty() && arr[dq.back()] < arr[i]){
        dq.pop_back();
    }
    dq.push_back(i);
    res.push_back(arr[dq.front()]);
}
return res;
}
int main(){
int n,k;
cout<<"Enter the size of n : "<<endl;
cin>>n;
cout<<"Enter the size of k : "<<endl;
cin>>k;
vector<int> arr(n);
vector<int> res;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
res = max_window_ele(arr,k);
for(int i=0;i<res.size();i++){
    cout<<res[i]<<" ";
}
return 0;
}
*/

/*Q.2 We are given a stack data structure with push & pop operations, the
task is to implement a queue using instances of stack data structure &
operations on them.
*/
//push efficient
/*
#include<iostream>
#include<stack>
using namespace std;
class Queue{
stack<int> st;
public:
    Queue(){};
    void push(int x){     //equivalent to queue.enqueue
        this->st.push(x);
    }
    void pop(){    //equivalent to queue.dequeue
        stack<int> temp;
        while(st.size()!=1){
            int curr = st.top();
            st.pop();
            temp.push(curr);
        }
        st.pop();
        while(!temp.empty()){
            int curr = temp.top();
            temp.pop();
            st.push(curr);
        }
    }
    int front(){
        stack<int> temp;
        while(st.size()!=1){
            int curr = st.top();
            st.pop();
            temp.push(curr);
        }
        int result = this->st.top();
        while(!temp.empty()){
            int curr = temp.top();
            temp.pop();
            st.push(curr);
    }
    return result;
    }

    bool empty(){
        return this->st.empty();
    }
};
int main(){
Queue q1;
q1.push(1);
q1.push(2);
q1.push(3);
q1.push(4);
q1.push(5);
q1.pop();
q1.pop();
while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
}
return 0;
}
*/
//pop efficient
#include<iostream>
#include<stack>
#include<climits>
using namespace std;
class Queue{
stack<int> st;
public:
    Queue(){};
    void push(int x){
        stack<int> temp;
        while(!this->st.empty()){
            temp.push(this->st.top());
            this->st.pop();
        }
        this->st.push(x);
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }
    void pop(){
        if(this->st.empty()) return;
        this->st.pop();
    }
    bool empty(){
        return this->st.empty();
    }
    int front(){
        if(this->st.empty()) return INT_MIN;
        return this->st.top();
    }
};
int main(){
Queue q1;
q1.push(1);
q1.push(2);
q1.push(3);
q1.push(4);
q1.push(5);
q1.pop();
q1.pop();
while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
}


return 0;
}





