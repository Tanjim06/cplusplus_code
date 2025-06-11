#include<iostream>
using namespace std;
void Heapify(int arr[],int i,int n){
int largest=i;
int left=2*i+1;
int right=2*i+2;
if(left<n && arr[left]>arr[largest]) largest=left;
if(right<n && arr[right]>arr[largest]) largest=right;
if(largest!=i){
    swap(arr[largest],arr[i]);
    Heapify(arr,largest,n);
}
}
void BuildMaxHeap(int arr[],int n){
for(int i=n/2;i>=0;i--){
    Heapify(arr,i,n);
}
}
void printheap(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
int arr[]={14,15,12,22,17,20,18,24,23,30,19};
int n=sizeof(arr)/sizeof(arr[0]);
BuildMaxHeap(arr,n);
printheap(arr,n);
return 0;
}
