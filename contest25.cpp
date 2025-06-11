#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,s=0;
cin>>a>>b;

if(a%b!=0){
    s=b-(a%b);
}
else{
    s=0;
}
cout<<s<<endl;
}
return 0;
}
