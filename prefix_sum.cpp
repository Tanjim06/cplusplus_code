#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    
    int q;
    cin>>q;
    while(q--){
        int i,j;
        cin>>i>>j;
        cout<<arr[j]-arr[i-1]<<endl;
    }
    
    return 0;
}