#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ans=1;
    for(int i=1;i<=k;i++){
        ans*=n;
    }
    cout<<ans<<endl;
    return 0;
}