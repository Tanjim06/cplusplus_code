#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1,i=0;
    while(i<r){
        if(arr[i]==1) i++;
        else if(arr[i]==2){
            int temp=arr[i];
            arr[i]=arr[r];
            arr[r]=temp;
            r--;
        }
        else{
            int temp=arr[i];
            arr[i]=arr[l];
            arr[l]=temp;
            i++;
            l++;
        }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}