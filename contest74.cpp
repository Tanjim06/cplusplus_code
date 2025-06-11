#include<iostream>
#include<vector>
using namespace std;
bool checked(long long n,long long h,vector<long long>&a,long long k){
    long long sum=0;
    for(int i=0;i<n-1;i++){
        long long x=a[i]+k-1;
        if(a[i+1]<=x){
            x=a[i+1]-a[i];
        }
        else{
            x=k;
        }
        sum+=x;   
    }
    sum+=k;
    return (sum>=h);
}
void solve(){
    long long n,h;
    cin>>n>>h;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long low=1;
    long long high=h;
    long long ans=h;
    while(low<=high){
        long long mid=(low+high)/2;
        if(checked(n,h,a,mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}