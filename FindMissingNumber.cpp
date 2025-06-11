#include<iostream>
#include<SFML/Graphics.hpp>
#include<set>
using namespace std;
int main(){
    int arr[]={1,2,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int N=n+1;
    int sum=0,arr_sum=0;
    sum=(N*(N+1))/2;  
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
    }
    cout<<"The missing element is "<<sum-arr_sum;
    return 0;
}