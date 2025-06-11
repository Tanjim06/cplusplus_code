#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=-1,j=0;
    for(;j<n;j++){
        if(arr[j]!=0){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(int k=i+1;k<j;k++){
        arr[k]=0;
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" "; 
    }
    return 0;
}