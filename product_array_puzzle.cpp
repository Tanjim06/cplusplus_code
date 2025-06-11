#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=1,right=1;
    for(int i=0;i<n;i++){
        right*=arr[i+1];
    }
    for(int i)
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}