#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(2*n);
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        cout<<arr[n-1]-arr[0]+arr[2*n-1]+arr[n];
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<arr[i+n]<<endl;
        }
    }

    return 0;
}