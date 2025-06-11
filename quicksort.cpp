#include<iostream>
using namespace std;
int part(int arr[],int s,int e){
int pivot=arr[s];
int i=s+1,j=e;
while(i<=j){
    while(i<=e && arr[i]<=pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<j){
        swap(arr[i],arr[j]);
    }
}
swap(arr[s],arr[j]);
return j;
}
void quicksort(int arr[],int s,int e){
if(s>=e) return;
int pi=part(arr,s,e);
quicksort(arr,s,pi-1);
quicksort(arr,pi+1,e);
}
int main(){
int n=5;
int arr[]={5,4,3,2,1};
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
//after swapping
quicksort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
