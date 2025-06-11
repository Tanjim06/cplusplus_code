#include<iostream>
#include<queue>
using namespace std;
int sum(int arr[],int k1,int k2,int n){
priority_queue<int>p;
priority_queue<int>p1;
for(int i=0;i<k1;i++){
    p.push(arr[i]);
}
for(int i=0;i<k2-1;i++){
    p1.push(arr[i]);
}
for(int i=k1;i<n;i++){
    if(arr[i]<p.top()){
        p.pop();
        p.push(arr[i]);
    }
}
for(int i=k2-1;i<n;i++){
    if(arr[i]<p1.top()){
        p1.pop();
        p1.push(arr[i]);
    }
}
int sum=0,sum1=0;
while(!p.empty()){
    sum+=p.top();
    p.pop();
}
while(!p1.empty()){
    sum1+=p1.top();
    p1.pop();
}
return sum1-sum;
}
int main(){
int arr[]={20,8,22,4,12,10,14};
int n=sizeof(arr)/sizeof(arr[0]);
int k1=3,k2=6;
cout<<sum(arr,k1,k2,n);

return 0;
}
