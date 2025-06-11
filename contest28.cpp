#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c,m,s;
cin>>a>>b>>c;
if(a>b && a>c){
    m=a;
}
else if(b>c && b>a){
    m=b;
}
else{
    m=c;
}

//now
if(a<b && a<c){
    s=a;
}
else if(b<c && b<a){
    s=b;
}
else{
    s=c;
}
if(a!=s && a!=m){
    cout<<a<<endl;
}
else if(b!=s && b!=m){
    cout<<b<<endl;
}
else{
    cout<<c<<endl;
}}
return 0;
}
