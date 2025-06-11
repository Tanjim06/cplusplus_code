#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
int n=2*abs(a-b);
if (a>n||b>n||c>n||abs(a-b)!=n/2){
        cout << -1 << endl;
    }
else{
int d=c+n/2;
if(d>n){
    d-=n;
}
cout<<d<<endl;
}}
return 0;
}
