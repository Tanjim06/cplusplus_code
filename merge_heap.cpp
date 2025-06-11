#include<iostream>
#include<vector>
using namespace std;
void Heapify(vector<int>&arr,int i,int n){
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
vector<int> mergeHeaps(int arr1[],int arr2[],int n1,int n2){
vector<int> arr(n1+n2);
for(int i=0;i<n1;i++){
    arr[i]=arr1[i];
}
for(int i=0;i<n2;i++){
    arr[n1+i]=arr2[i];
}
int n=arr.size();
for(int i=n/2-1;i>=0;i--){
    Heapify(arr,i,n);
}
return arr;
}
int main(){
int arr1[]={10,5,6,2};
int arr2[]={12,7,9};
int n1=sizeof(arr1)/sizeof(arr1[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);
vector<int>ans(n1+n2);
ans=mergeHeaps(arr1,arr2,n1,n2);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
