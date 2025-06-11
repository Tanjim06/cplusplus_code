#include<iostream>
#include<queue>
using namespace std;
int kthsmallest(int arr[],int l,int r,int k){
priority_queue<int>p;
for(int i=0;i<k;i++){
    p.push(arr[i]);
}
for(int i=k;i<=r;i++){
    if(p.top()>arr[i]){
        p.pop();
        p.push(arr[i]);
    }
}
return p.top();
}
int main(){
int arr[]={10,3,7,4,8,9,2,6};
int n=sizeof(arr)/sizeof(arr[0]);
int k=4,l=0,r=n-1;
cout<<kthsmallest(arr,l,r,k);

return 0;
}
