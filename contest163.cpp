#include<iostream>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int one=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        one+=arr[i];
    }
    if(one>n-1||one==0) {
        cout<<"YES"<<endl;
        continue;
    }
    bool liar=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==0&&arr[i+1]==0){
            liar=true;
            break;
        }
    }
    if(liar)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
