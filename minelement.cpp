#include<iostream>
#include<algorithm>
using namespace std;
int f(int arr[],int index,int n){
if(index==n-1){
    return arr[index];
}
return min(arr[index],f(arr,index+1,n));
}
int main(){

int arr[]={7,2,4,3,6};
cout<<f(arr,0,5);


return 0;
}
