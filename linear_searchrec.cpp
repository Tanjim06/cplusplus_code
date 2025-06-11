#include<iostream>
using namespace std;
int f(int arr[],int idx,int x,int n){
if(idx==n){
    return 0;
}
if(arr[idx]==x){
    return 1;
}
return f(arr,idx+1,x,n);
}
int main(){
int arr[]={1,2,3,4,5};
cout<<f(arr,0,6,5);


return 0;
}
