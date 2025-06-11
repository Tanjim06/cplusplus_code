#include<iostream>
using namespace std;
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
    int total=0,c=0;
    for(int i=0;i<n;i++){
        total+=arr[i];
        int m=0;
        if(m<arr[i]) m=arr[i];
        if(total-m==total) c++;
    }
    cout<<c<<endl;
}

return 0;
}
