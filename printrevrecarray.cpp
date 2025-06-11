#include<iostream>
using namespace std;
void f(int arr[],int n){
if(n==0){
    cout<<arr[n]<<" ";
    return;
}
cout<<arr[n]<<" ";
f(arr,n-1);
}
int main(){
int arr[]={3,7,6,2,8};
f(arr,4);
return 0;
}
