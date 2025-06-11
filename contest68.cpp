#include<iostream>
using namespace std;
int ncr(int n,int r){
    if(r>n) return 0;
    if(r==0 || r==n) return 1;
    return ncr(n-1,r-1)+ncr(n-1,r);
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
    }
    cout<<ncr(10-n,2)*ncr(4,2)<<endl;
    }
    return 0;
}