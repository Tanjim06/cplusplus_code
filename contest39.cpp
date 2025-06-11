#include<iostream>
#include<cmath>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
int f=abs(a-1);
int s=abs(b-c)+abs(c-1);
if(f<s){
    cout<<1<<endl;
}
else if(f>s){
    cout<<2<<endl;
}
else{
    cout<<3<<endl;
}}
return 0;
}
