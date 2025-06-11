#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]>k){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}