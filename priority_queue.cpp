#include<iostream>
#include<queue>
using namespace std;

int main() {
    priority_queue<int> p; //maxheap
    priority_queue<int,vector<int>,greater<int>> p1;//minheap
    p.push(10);
    p.push(20);
    p.push(30);
    p.push(80);
    p.push(500);
    cout << p.top() << endl;
    p.pop();
    cout << p.top() << endl;
    cout << p.size() << endl;
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}
