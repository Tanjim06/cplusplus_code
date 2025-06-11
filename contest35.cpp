#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c,n;
cin>>a>>b>>c>>n;
int total=a+b+c+n;
int maxcoin=max({a,b,c});
if(total%3==0 && maxcoin<=total/3){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}}
return 0;
}
