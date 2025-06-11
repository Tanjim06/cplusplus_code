#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,8,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pre[n];
    int suff[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    suff[n-1]=arr[n-1];
    for(int i=n-2;i>0;i--){
        suff[i]=suff[i+1]+arr[i];
    }
    for(int i=0;i<n;i++){
        if(suff[i]==pre[i]){
            cout<<i<<" is the equilibrium point"<<endl;
        }
    }
    return 0;
}