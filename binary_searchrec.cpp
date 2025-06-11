#include<iostream>
using namespace std;
int f(int arr[],int s,int e,int x){
if(s>e){
    return 0;
}
int mid=(s+e)/2;
if(arr[mid]==x){
    return 1;
}
else if(arr[mid]<x){
    return f(arr,mid+1,e,x);
}
else{
   return f(arr,s,mid-1,x);
}}
int main(){
int arr[]={3,8,11,15,20,22};
cout<<f(arr,0,5,20);

return 0;
}
