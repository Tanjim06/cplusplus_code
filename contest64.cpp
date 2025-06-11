#include<iostream>
using namespace std;
long long power(long long a,long long b){
    if(b==0) return 1;
    if(b==1) return a;
    long long x=power(a,b/2);
    long long ans=0;
    ans=(x*x);
    if(b%2==1){
        ans*=a;
    }
    return ans;
}
int main(){
    long long n,m;
    cin>>n;
    cin>>m;
    if(n>30){
        cout<<m<<endl;
    }
    else{
        cout<<m%power(2,n)<<endl;
    }
    return 0;
}