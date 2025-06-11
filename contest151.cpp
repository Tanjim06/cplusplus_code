#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c ,d;
cin>>a>>b>>c>>d;
int f=0;
if(b>a)f++;
if(c>a)f++;
if(d>a)f++;
cout<<f<<endl;
}
return 0;
}
