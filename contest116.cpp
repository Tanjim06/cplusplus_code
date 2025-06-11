#include<iostream>
using namespace std;
int minnumber(int arr[],int n){
    int oddcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            oddcount++;
        }
    }
    if(oddcount!=0){
        return n-oddcount;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<minnumber(arr,n)<<endl;
    }

    return 0;
}