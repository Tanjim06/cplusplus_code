//Q.1 Height of heap
/*
#include<iostream>
using namespace std;
int height(int arr[],int n){
if(n==1) return 1;
int h=0;
while(n!=1){
    n/=2;
    h++;
}
return h;
}
int main(){
int arr[]={1,3,6,5,9,8};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<height(arr,n);
return 0;
}
*/
//Q.2 Minimum cost of ropes
/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
int arr[]={4,2,7,6,9};
int n=sizeof(arr)/sizeof(arr[0]);
priority_queue<int,vector<int>,greater<int>>p;
for(int i=0;i<n;i++){
    p.push(arr[i]);
}
int s=0;
while(p.size()!=1){
    int n1=p.top();
    p.pop();
    int n2=p.top();
    p.pop();
    int t=n1+n2;
    s+=t;
    p.push(t);
}
cout<<s;
return 0;
}
*/
//Q.3 Magician and chocolates
/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
int arr[]={2,4,8,6,10};
int n=sizeof(arr)/sizeof(arr[0]);
priority_queue<int>p;
for(int i=0;i<n;i++){
    p.push(arr[i]);
}
int t=5;
int s=0;
while(t-- && !p.empty()){
    int c=p.top();
    s+=c;
    p.pop();
    p.push(c/2);
}
cout<<s;
return 0;
}
*/
//Q.4 Last stone weight
/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
int arr[]={2,7,4,1,8,1};
int n=sizeof(arr)/sizeof(arr[0]);
priority_queue<int>p;
for(int i=0;i<n;i++){
    p.push(arr[i]);
}
while(p.size()!=1){
    int n1=p.top();
    p.pop();
    int n2=p.top();
    p.pop();
    int c=n1-n2;
    if(c) p.push(c);
}
cout<<p.top();
return 0;
}
*/
//Q.5 Profit Maximization
#include<iostream>
#include<queue>
using namespace std;
int main(){
int arr[]={6,4,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
priority_queue<int>p;
for(int i=0;i<n;i++){
    p.push(arr[i]);
}
int b=5;
int s=0;
while(b-- && !p.empty()){
    int n1=p.top();
    s+=n1;
    p.pop();
    if(n1) p.push(n1-1);
}
cout<<s;
return 0;
}
