#include<iostream>
using namespace std;
int f(int arr[],int index,int n){
if(index==n){
    return 0;
}
return arr[index]+f(arr,index+1,n);
}
int main(){
int arr[]={3,7,6,2,8};
cout<<f(arr,0,5);
return 0;
}
