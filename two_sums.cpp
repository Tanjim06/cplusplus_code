#include<iostream>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            cout<<"Element found"<<endl;
            break;
        } 
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    if(i>=j) cout<<"Element not found";

    return 0;
}